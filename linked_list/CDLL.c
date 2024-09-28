#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))
struct node 
{
	struct node *prev;
	int data;
	struct node *next;
	
};

struct node * accept(int n)
{
	struct node *f,*s,*t;
	f=NEWNODE;
	printf("enter the data:");
	scanf("%d",&f->data);
	f->prev=NULL;
	f->next=NULL;
	s=f;

	for(int i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("enter the data:");
		scanf("%d",&t->data);
		s->next=t;
		t->prev=s;
		t->next=NULL;
		s=s->next;
	}
	s->next=f;
	f->prev=s;

	return f;
}

void display(struct node *f)
{
	struct node *t;

	t=f;
	do
	{
		printf("%d->",t->data);
		t=t->next;

	}while(t!=f);
	printf("NULL");
}

struct node* eraseall(struct node *f)
{
	struct node *t;
	t=f;
	f=f->next;
	t->next=NULL;

	while(f!=NULL)
	{
		t=f;
		f=f->next;
		free(t);
	}

	return f;


}

int main()
{
	struct node *head;
	int n;

	printf("how many nodes you want to create:");
	scanf("%d",&n);

	head = accept(n);

	printf("CIRCULAR DUBLY LINK LIST:");
	display(head);

	head=eraseall(head);

	if(head==NULL)
		printf("\nALL MEMORY IS FREE");




	return 0;
}