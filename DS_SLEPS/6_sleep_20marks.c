#include<stdio.h>
#include<stdlib.h>
#define START NULL
#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct node
{
	int data;
	struct node *next;
};

struct node *front,*rear;

void init()
{
	front=START;
	rear=START;
}

int isempty()
{
	if(front==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}


}

void addq(int data)
{
	struct node *t;

	t=NEWNODE;
	if(t==NULL)
	{
		printf("Queue is overflow");
		return;
	}
	printf("data added%d",data);
	t->data=data;
	t->next=NULL;

	if(rear==NULL)
	{
		front=t;
		rear=t;

	}
	else
	{
	rear->next=t;
	rear=rear->next;
	rear->next=NULL;
	}

}

int delq()
{
	struct node *t;
	if(isempty())
	{
		printf("queue is empty:\n");
		return;
	}
	else
	{
		int num=front->data;

		if(front->next==NULL)
		{
			free(front);
			front=rear=NULL;
			return num;
		}
		t=front;
		front=front->next;
		free(t);
		return num;

	}
}

int peekq()
{
	if(isempty())
	{
		printf("queue is empty:\n");
		return;
	}
	else
	{
		return front->data;
	}
}

int main()
{

	init();

	int choice,num;
	while(1)
	{

		printf("\nmenu\n1:add");

		printf("enter the choice:");
		scanf("%d",&choice);

		switch(choice)
		{
		case 1:
			     printf("enter data to add:");
			     scanf("%d",&num);
			     addq(num);

			     printf("data added succesfully");

			     break;

			 case 2:
			     printf("data deleted %d",delq());
			 	
		}


	}


	return 0;
}