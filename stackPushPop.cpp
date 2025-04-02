#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int* arr;
};

int isEmpty(struct stack* ptr){
	if(ptr->top==-1)
		return 1;
	return 0;
}
int pop(struct stack* s){
	if(isEmpty(s))
	{
		printf("Stack Underflow!");
		return -1;
	}
	else
	{
		int val=s->arr[s->top];
		s->top--;
		return val;
	}
}
int isFull(struct stack* ptr){
	if(ptr->top==ptr->size-1)
		return 1;
	return 0;
}
void push(struct stack* s,int value){
	if(isFull(s))
		printf("Stack Overflow!");
	else
	{
		s->top++;
		s->arr[s->top]=value;
	}
}
int main(){
	int element;
	struct stack* s=(struct stack*)malloc (sizeof(struct stack));
	s->size=50; s->top=-1;
	s->arr=(int*)malloc(s->size*sizeof(int));
	printf("Before pushing,full: %d ",isFull(s)); 
	printf("Before pushing,empty: %d ",isEmpty(s)); 
	printf("Enter the element you wish to push:-\n");
	scanf("%d",&element);
	push(s,element);
	printf("After pushing,full: %d ",isFull(s)); 
	printf("After pushing,empty: %d ",isEmpty(s));
	printf("Popping %d ",pop(s));
}