//WAP to print mth node from the last of a linked list of n nodes.
#include<stdio.h>
#include<stdlib.h>

struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;

void insertAtFront(int data){
	struct node* temp;
	temp = malloc(sizeof(struct node));
	temp->info = data;
	temp->link = start;
	start = temp;
}

void insertAtEnd(int data){
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));
    if(start==NULL)insertAtFront(data);
    else{
        temp->link = 0;
        temp->info = data;
        head = start;
        while (head->link != NULL) {
            head = head->link;
        }
        head->link = temp;
    }
}

int countNodes(){
    struct node* temp;
    int count=0;

	if (start != NULL){
		temp = start;
		while (temp != NULL) {
			count++;
			temp = temp->link;
		}
	}

    return count;
}

int mFromLast(int m){
    struct node *temp=start;
    int n = countNodes();
    int pos = n-m;
    while(pos--){
        temp = temp->link;
    }
    return temp->info;
}

int main()
{
    int n,m;
    printf("Enter size of linked list: ");
    scanf("%d",&n);
    while(n--){
        int num;
        printf("Enter a number: ");
        scanf("%d",&num);
        insertAtEnd(num);
    }
    printf("Enter m: ");
    scanf("%d",&m);
    printf("The mth node from last = %d\n",mFromLast(m));
	return 0;
}