// Write a menu driven program to perform the following operations in a single linked list by using suitable user defined functions for each case.
// a) Traversal of the list.
// b) Check if the list is empty.
// c) Insert a node at the certain position (at beginning/end/any position).
// d) Delete a node at the certain position (at beginning/end/any position).
// e) Delete a node for the given key.
// f) Count the total number of nodes.
// g) Search for an element in the linked list.
// Verify & validate each function from main method.
#include<stdio.h>
#include<stdlib.h>

int size=0;

struct Node {
    int data;
    struct Node* next;
}*head = NULL;

int isEmpty(){
    return !size;
}

struct Node* getNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
 
void insertPos(struct Node** current, int pos, int data)
{
    if (pos < 1 || pos > size + 1)
        printf("Invalid position!\n");
    else {
        while (pos--) {
            if (pos == 0) {
                struct Node* temp = getNode(data);
                temp->next = *current;
                *current = temp;
            }
            else
              current = &(*current)->next;
        }
        size++;
    }
}
 
void printList(struct Node* head)
{
    while (head != NULL) {
        printf("%d->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}
 
int main()
{
    head = getNode(3);
    head->next = getNode(5);
    head->next->next = getNode(8);
    head->next->next->next = getNode(10);
 
    size = 4;
 
    printf("Linked list before insertion: ");
    printList(head);
 
    int data = 12, pos = 3;
    insertPos(&head, pos, data);
    printf("Linked list after insertion of 12 at position 3: ");
    printList(head);
 
    data = 1, pos = 1;
    insertPos(&head, pos, data);
    printf("Linked list after insertion of 1 at position 1: ");
    printList(head);
 
    data = 15, pos = 7;
    insertPos(&head, pos, data);
    printf("Linked list after insertion of 15 at position 7: ");
    printList(head);
    free(head);
    return 0;
}