//Insertion at the end of a linked list without traversing
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node * link;
};
struct node* AddAtEnd (struct node* ptr,int data){
	struct node * temp = (struct node*) malloc (sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	ptr->link=temp;
	return temp;
}
int main(){
	struct node * head = (struct node*) malloc (sizeof(struct node));
	head->data=24;
	head->link=NULL;
	
	struct node *ptr = head;
	ptr = AddAtEnd(ptr,27);
	ptr = AddAtEnd(ptr,43);
	ptr = AddAtEnd(ptr,6);
	
	ptr = head;
	
	while(ptr!= NULL){
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	
}