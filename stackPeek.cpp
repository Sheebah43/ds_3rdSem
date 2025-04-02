#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int* arr;
};
int peek(struct stack* sp, int i)
{
	int index=sp->top-i+1;
	if(index<0)
	{
		printf("Not a valid position.");
		return -1;
	}
	else{
		return sp->arr[index];
	}
}
int isFull(struct stack* ptr)
{
	if(ptr->top==ptr->size-1)
		return 1;
	return 0;
}
void push(struct stack* s,int value)
{
	if(isFull(s))
	{
		printf("Stack Overflow!");
	}
	else
	{
		s->top++;
		s->arr[s->top]=value;
	}
}
int main(){
	int element;
	struct stack* s=(struct stack*)malloc (sizeof(struct stack));
	s->size=50;
	s->top=-1;
	s->arr=(int*)malloc(s->size*sizeof(int));
	printf("Enter the elements you wish to push:-\n");
	for(int i=0;i<7;i++)
	{
		scanf("%d",&element);
    	push(s,element);
	}
	for(int i=1;i<=7;i++)
	{
			printf("The value at %d is %d\n",i,peek(s,i));
	}	
}