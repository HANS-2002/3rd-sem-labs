// Extend the LA 1 by providing more options as follows:
// a) To count number of leaf nodes in the tree.
// b) To count number of non-leaf nodes in the tree.
// c) To find number of nodes in the tree.
// d) To find sum of all nodes of the tree.
// e) To print depth of the tree.
// f) To find nodes which are at maximum depth in the tree?
// g) To print all the elements of kth level in single line.
// h) To find the common ancestor and print the paths.
// i) To check whether a tree is a binary search tree or not.

//INCOMPLETE(DO NOT COPY)

#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left, *right;
} BST;

void insertBST(BST **root, int data)
{
    BST *newNode = (BST *)malloc(sizeof(BST));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    if (!(*root))
        *root = newNode;
    else
    {
        BST *prev = NULL, *tmp = *root;
        while (tmp)
        {
            prev = tmp;
            if (tmp->data > data)
                tmp = tmp->left;
            else if (tmp->data < data)
                tmp = tmp->right;
        }
        if (prev->data > data)
            prev->left = newNode;
        else
            prev->right = newNode;
    }
}

void createBST(BST **root)
{
    int choice = 1;
    do
    {
        int data = 0;
        printf("\nEnter a number to enter in BST: ");
        scanf("%d", &data);
        insertBST(root, data);
        printf("\nPress 1 to enter a value to BST or 0 to exit: ");
        scanf("%d", &choice);
    } while (choice == 1);
}

void Inorder(BST *root)
{
    if (!root)
        return;
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}

void Preorder(BST *root)
{
    if (!root)
        return;
    printf("%d ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(BST *root)
{
    if (!root)
        return;
    Postorder(root->left);
    Postorder(root->right);
    printf("%d ", root->data);
}

void search(BST *root, int data)
{
    BST *tmp = root;
    while (tmp)
    {
        if (tmp->data > data)
            tmp = tmp->left;
        else if (tmp->data < data)
            tmp = tmp->right;
        else
        {
            printf("\n%d found in BST!\n", data);
            return;
        }
    }
    printf("\nElement not found in BST!\n");
}

void findSmallest(BST *root)
{
    if (root == NULL)
        printf("\nBST EMPTY!\n");
    else
    {
        BST *tmp = root;
        while (tmp->left)
            tmp = tmp->left;
        printf("\nSmallest element in BST = %d\n", tmp->data);
    }
}

void findLargest(BST *root)
{
    if (root == NULL)
        printf("\nBST EMPTY!\n");
    else
    {
        BST *tmp = root;
        while (tmp->right)
            tmp = tmp->right;
        printf("\nLargest element in BST = %d\n", tmp->data);
    }
}

void _deleteTree(BST *root)
{
    if (root == NULL)
        return;
    _deleteTree(root->left);
    _deleteTree(root->right);
    free(root);
}

void deleteTree(BST **root)
{
    _deleteTree(*root);
    *root = NULL;
}

int countLeaf(BST *root)
{
    if (root = NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
        return countLeaf(root->left) + countLeaf(root->right);
}

int countNodes(BST *root){
    if(root==NULL)return 0;
    int res=0;
    if(root->left && root->right)res++;
    res += countNodes(root->left)+countNodes(root->right);
    return res;
}

int countNonLeafNodes(BST *root){
    return countNodes(root)-countLeaf(root);
}

int sumOfNodes(BST *root){
    return 0;
}

int main()
{
    BST *root = NULL;
    while (1)
    {
        int choice;
        printf("\n----------------------------------------\n"
               "\tBinary Search Tree Menu\n"
               "----------------------------------------\n"
               "0. Quit\n"
               "1. Create\n"
               "2. In-Order Traversal\n"
               "3. Pre-Order Traversal\n"
               "4. Post-Order traversal\n"
               "5. Search\n"
               "6. Find Smallest Element\n"
               "7. Find Largest Element\n"
               "8. Deletion of Tree\n"
               "9. To count number of leaf nodes in the tree.\n"
               "10. To count number of non-leaf nodes in the tree.\n"
               "11. To find number of nodes in the tree.\n"
               "12. To find sum of all nodes of the tree.\n"
               "13. To print depth of the tree.\n"
               "14. To find nodes which are at maximum depth in the tree?\n"
               "15. To print all the elements of kth level in single line.\n"
               "16. To find the common ancestor and print the paths.\n"
               "17. To check whether a tree is a binary search tree or not.\n"
               "----------------------------------------\n"
               "Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            createBST(&root);
            break;
        case 2:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("In-order traversal: ");
            Inorder(root);
            printf("\n");
            break;
        case 3:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("Pre-order traversal: ");
            Preorder(root);
            printf("\n");
            break;
        case 4:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("Post-order traversal: ");
            Postorder(root);
            printf("\n");
            break;
        case 5:
        {
            int d;
            printf("Enter number to search: ");
            scanf("%d", &d);
            search(root, d);
        }
        break;
        case 6:
            findSmallest(root);
            break;
        case 7:
            findLargest(root);
            break;
        case 8:
            deleteTree(&root);
            break;
        case 9:
            printf("\nNumber of leaf nodes = %d\n",countLeaf(root));
            break;
        case 10:
            printf("\nNumber of non-leaf nodes = %d\n",countNonLeafNodes(root));
            break;
        case 11:
            printf("\nNumber of nodes = %d\n",countNodes(root));
            break;
        case 12:
            printf("\nSum of data of all nodes = %d\n",sumOfNodes(root));
            break;
        case 13:
            break;
        case 14:
            break;
        case 15:
            break;
        case 16:
            break;
        case 17:
            break;
        default:
            printf("\nEnter a valid choice!\n");
            break;
        }
    }
    return 0;
}