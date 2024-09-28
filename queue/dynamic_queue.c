#include<stdio.h>
#include<stdlib.h>
#define START NULL
#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
	int data;
	struct node* next;
};


struct node *rear;

void init()
{
	rear=START;
}

int isempty()
{
	if(rear==START)
	
		return 1;
	
	else
		return 0;
}


void addq(int data)
{
	  struct node *t,*f;
	  t=NEWNODE;
	  f=NEWNODE;

	  t->data=data;
	  t->next=NULL;

	  if(isempty())
	  {
	  	rear=t;
	  	f=t;
	  	printf("%d",rear->data);
	  }
	  else
	  {
	  
	  f=f->next;
	  f=t;
	  printf("%d",f->data);

	  }   
}
int delq()
{
	struct node* t;
	int item;

	if(isempty())
	{
		printf("stack is empty");

	}
	else
	{
	t=rear;
	
	if(rear->next!=NULL)
	   rear=rear->next;
	
	item=t->data;
	free(t);
	}
	return item;

}





int main()
{
	init();
	addq(11);
	addq(22);
	addq(33);

	printf("data deleted succesfully %d",delq());
	//printf("data deleted succesfully %d",delq());
	printf("data deleted succesfully %d",delq());
	//printf("data deleted succesfully %d",delq());



}