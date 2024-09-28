#include<stdio.h>
#include <stdlib.h>

#define NEWNODE (struct node*)malloc(sizeof(struct node))

struct node
{
	int data;
	struct node *next;

};

struct node* create(int n)
{
	struct node *f,*l;
	
	f=NEWNODE;

	printf("enter the data:");
	scanf("%d",&f->data);
	f->next=NULL;
	l=f;

	for(int i=2;i<=n;++i)
	{
		l->next=NEWNODE;
		printf("enter the data");
		scanf("%d",&l->next->data);
		l=l->next;
		l->next=NULL;

	}

	return f;
}

void display(struct node *f)
{
	while(f!=NULL)
	{
		printf("data :%d\n",f->data);
		f=f->next;
	}
}





int main()
{
	struct node *head=NULL;

	int n;

	printf("how many node you want to create");
	scanf("%d",&n);

	head=create(n);
	display(head);




}