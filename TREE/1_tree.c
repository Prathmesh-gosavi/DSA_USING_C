#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))
#define START NULL

struct node
{
	struct node *lc;
	int data;
	struct node *rc;
};

struct node *root;

void init()
{
	root=START;
}

void bst(int item)
{
	struct node *t;
	struct node *t1;
	struct node *t2;
	t=NEWNODE;

	t->lc=NULL;
	t->data=item;
	t->rc=NULL;

	if(root==NULL)
	{
		root=t;
	}
	else
	{
		t1=root;
		while(t1!=NULL)
		{
			t2=t1;
			if(item<=t1->data)
			{
				t1=t1->lc;//t1 go to the null;and t1 is go null but t2 stop last node
			}
			else
			{
				t1=t1->rc;
			}

		}
		
		if(item<=t2->data)
		{
			t2->lc=t;
		}
		else
		{
			t2->rc=t;
		}
	}
}

void inorder(struct node *t)
{
	if (t!=NULL)
	{
		inorder(t->lc);
		printf("%d\n",t->data);
		inorder(t->rc);
	}

}
/*void preorder(struct node *t)
{
	if (t!=NULL)
	{
		inorder(t->lc)
		printf("%d\n",t->data );
		inorder(t->rc)
	}


}
void postorder(struct node *t)
{
	if (t!=NULL)
	{
		inorder(t->lc)
		printf("%d\n",t->data );
		inorder(t->rc)
	}

}

*/




int main()
{
	int data;
	int n;

	init();

	printf("how many number:");
	scanf("%d",&n);


	for(int i=0;i<n;i++)
	{
	printf("enter data:");
	scanf("%d",&data);
	bst(data);
	}

	inorder(root);


	return 0;
}









