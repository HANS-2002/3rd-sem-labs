//WAP to display the contents of a linked list in reverse order.
#include<stdio.h>
#include<stdlib.h>

struct node {
	int info;
	struct node* link;
};
struct node* start = NULL;

void reverse()
{
	struct node *t1, *t2, *temp;
	t1 = t2 = NULL;
	if (start == NULL)
		printf("List is empty\n");
	else {
		while (start != NULL) {
			t2 = start->link;
			start->link = t1;
			t1 = start;
			start = t2;
		}
		start = t1;
		temp = start;
	}
}

void traverse(){
	struct node* temp;

	if (start == NULL)
		printf("\nList is empty\n");

	else {
		temp = start;
		printf("\nThe list is => ");
		while (temp != NULL) {
			printf("%d -> ",temp->info);
			temp = temp->link;
		}
		printf("NULL\n");
	}
}

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

int main()
{
	int n;
    printf("Enter size of linked list: ");
    scanf("%d",&n);
    while(n--){
        int num;
        printf("Enter list element: ");
        scanf("%d",&num);
        insertAtEnd(num);
    }
	printf("List before reversal: ");
	traverse();
	printf("List after reversal: ");
	reverse();
	traverse();
	return 0;
}