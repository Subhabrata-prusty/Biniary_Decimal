#include"stdio.h"
#include"stdlib.h"
void push();
void pop();
struct stack
{
	int roll;
	struct stack *link;
};struct stack *p=0,*q;
main()
{
	int choice;
	do
	{
	printf("\n enter 1 for push:");
	printf("\n enter 2 for pop:");
	printf("\n enter 0 for exit:");
	printf("\n enter choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		push();
	}
	if(choice==2)
	{
		if(p==0)
		{
			printf("\n stack is empty:");
			continue;
		}
		pop();
	}

	}while(choice!=0);

}
void push()
{
	int data;
	printf("\n enter data:");
	scanf("%d",&data);
	if(p==0)
	{
		p=(struct stack *)malloc(sizeof(struct stack));
		p->link=0;
		p->roll=data;
		q=p;
	}
	else
	{
		p=(struct stack *)malloc(sizeof(struct stack));
		p->link=q;
		p->roll=data;
		q=p;
	}
}

void pop()
{
	int data;
	data=p->roll;
	q=p->link;
	free(p);
	p=q;
	printf("%d",data);

}