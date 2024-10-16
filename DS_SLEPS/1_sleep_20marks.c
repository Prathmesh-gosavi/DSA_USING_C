#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))


struct node
{
	struct node *prev;
	int data;
	struct node *next;
};


struct node* create(int n)
{
	struct node *f,*s,*t;

	f=NEWNODE;
	printf("enter data to add:");
	scanf("%d->",&f->data);
	f->next=NULL;
	f->prev=NULL;
	s=f;

	for(int i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("enter data to add:");
		scanf("%d",&t->data);
		s->next=t;
		t->prev=s;
		t->next=NULL;
		s=s->next;

	}

	return f;	
}



void display(struct node *f)
{
	struct node *t;
	t=f;
	while(t!=NULL)
	{
		printf("%d->",t->data);
		t=t->next;
	}
	printf("NULL\n");
}

struct node * sort(struct node *f)
{
	if(f==NULL)return NULL;


	struct node *lptr=NULL,*ptr1;
	int swapped;
	do
	{
		 swapped=0;
		ptr1=f;

		while(ptr1->next!=lptr)
		{ 
			int temp;

			if(ptr1->data > ptr1->next->data)
			{
				 temp =ptr1->data;
				 ptr1->data=ptr1->next->data;
				 ptr1->next->data=temp;

				 swapped=1;

			}
			ptr1=ptr1->next;
		}
		lptr=ptr1;

	}while(swapped);

	return f;
}

void reversedisplay(struct node *f)
{
	struct node *t;

	for(t=f;t->next!=NULL;t=t->next);

	for(;t!=NULL;t=t->prev)
	{
		printf("%d->",t->data);
	}
	printf("NULL\n");
}

struct node * eraseall(struct node *f)
{
	struct node *t;
	t=f;

	while(f!=NULL)
	{
		f=f->next;
		free(t);
		t=f;

	}
	return f;
}


int main()
{
	struct node *head;

	int n;
	printf("how many node you want create:");
	scanf("%d",&n);
	
	head=create(n);

	printf("before sort:");
	display(head);

	head=sort(head);

	printf("after sort:");
	display(head);

	printf("reverse display");
	reversedisplay(head);

	head=eraseall(head);
	if(head==NULL)
		printf("\nALL MWMORY IS FREE");

	return 0;
}