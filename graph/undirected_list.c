#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct node
{
	int vertex;
	struct node *next;
};

struct node *IAL[SIZE];
int nov;
int noe;

void add_in_list(struct node *l[],int i ,int v)
{
	struct node *t;

	t=NEWNODE;
	t->vertex=v;
	t->next=NULL;

	if(l[i]==NULL)
	{
		l[i]=t;
	}
	else
	{
		t->next=l[i];
		l[i]=t;
	}

}


void init(struct node *l[])
{
	for(int i=0;i<nov;i++)
	{
		l[i]=NULL;
	}
}


void accept()
{
	int i,j,k;

	printf("enter the vertex :");
	scanf("%d",&nov);

	printf("\nenter the edeges :");
	scanf("%d",&noe);

	for(int k=0;k<noe;k++)
	{
		printf("enter the edeges (vi vj) :");
		scanf("%d %d",&i,&j);

		add_in_list(IAL,i,j);
		add_in_list(IAL,j,i);

	}

}

void display(struct node *l[])
{
	struct node *t;
	int i;
	for(int i=0;i<nov;i++ )
	{
		printf("V%d: ",i);
		for(t=l[i];t!=NULL;t=t->next)
		{
			printf("[%d]->",t->vertex);

		}
		printf("NULL\n");
	}
}

void free_list(struct node *l[])
{
	struct node *t,*s;

	for(int i=0;i<nov;i++)
	{
		for(t=l[i];t!=NULL;)
		{
			s=t;
			t=t->next;
			free(s);
		}
		l[i]=NULL;
	}

}

void degree(struct node *l1[])
{
	struct node *t;
	int in,out;

	

	printf("degree of a vertex:");
	for(int i=0;i<nov;i++)
	{

		in=0;
		out=0;
		for(t=l1[i];t!=NULL;t=t->next)
		{
			out++;
		}

		
		printf("\nvertex:v%d  TOTALDEGREE=%d\n",i,out);

	}
}


int main()
{

	
	init(IAL);

	accept();




	printf("\n Inverse adjencancy list \n");
	printf("---------------------\n");
	display(IAL);

	degree(IAL);

	free_list(IAL);
	//free_list(AL);

	return 0;
}