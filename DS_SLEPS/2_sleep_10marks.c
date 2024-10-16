#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))


struct node 
{

	int data;
	struct node *next;
};

struct node * create(int n)
{
	struct node *f = NEWNODE;
	struct node *t;

	printf("enter data:");
	scanf("%d",&f->data);
	f->next = NULL;
	t=f;

	for(int i=2;i<=n;i++)
	{
		t->next=NEWNODE;
		printf("enter data:");
		scanf("%d",&t->next->data);
		t = t->next;
		t->next=NULL;

	}


	return f;
}

void display(struct node *f)
{
	struct node *t;

	t=f;

	for(t=f;t!=NULL;t=t->next)
	{
		printf("%d->",t->data);
	}
	printf("NULL");

}

int main()
{
	struct node *head;

	int n;
	printf("how many node you want create:");
	scanf("%d",&n);
	
	head=create(n);

	display(head);

}