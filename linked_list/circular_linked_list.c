#include<stdio.h>
#include<stdlib.h>
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
		printf("enter the data:");
		scanf("%d",&l->next->data);
		l=l->next;
		l->next=NULL;

	}
	l->next=f;

	return f;
}


void display(struct node *f)
{
	struct node *t;

	t=f;// f stop is frist node then t prinrt and ++t t!=f print conditont true the you return f the out of the loop

	do
	{
		printf("your data:%d\n",t->data);
		t=t->next;


	}while(t!=f);

}

struct node* eraseall(struct node *f)
{
	struct node *t;
	
	t=f;
	
	f=f->next;// f is chor t is polic
	
	t->next=NULL;

	while(f!=NULL) //when f is null all memory is free
	{
		t=f;
		f=f->next;
		free(t);
	}
	return f;
}


int main()
{
	struct node *head=NULL;

	int n;

	printf("how many nodes");
	scanf("%d",&n);

	head=create(n);

	display(head);

	head=eraseall(head);



	return 0;
}