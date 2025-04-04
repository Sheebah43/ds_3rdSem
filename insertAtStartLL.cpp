#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
struct Node* insertAtStart(struct Node* head, int x)
{
	struct Node * ptr = (struct Node* ) malloc (sizeof(struct Node));
	ptr->next=head;
	ptr->data=x;
	return ptr;
}
void linkedListTraversal(struct Node* p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
    	p=p->next;
	}
}
int main()
{
	int x;
	struct Node* head;
	struct Node* second;
	struct Node* third;
	struct Node* fourth;
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*) malloc (sizeof(struct Node));
	third=(struct Node*) malloc (sizeof(struct Node));
	fourth=(struct Node*) malloc (sizeof(struct Node));
	head->data=34;
	head->next=second;
	second->data=426;
	second->next=third;
	third->data=5;
	third->next=fourth;
	fourth->data=61;
	fourth->next=NULL;
	linkedListTraversal(head);
	printf("\nEnter the element you wish to insert:-\n");
	scanf("%d",&x);
	head=insertAtStart(head,x);
	linkedListTraversal(head);
}