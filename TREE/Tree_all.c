#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))


struct node 
{
	struct node *lc;
	int data;
	struct node *rc;

};

struct node *root;
int cnt;

void init()
{
	root = NULL;
}


void bst(int item)
{

	struct node *t;
	struct node *t1;
	struct node *t2;

	t = NEWNODE;

	t->data=item;
	t->lc  =NULL;
	t->rc  =NULL;

	if(root == NULL)
	{
		root = t;
	}
	else
	{
		t1 = root;

		while(t1!=NULL)
		{
			t2=t1;

			if(item <= t1->data)
			{
				t1 = t1->lc;
			}
			else
			{
				t1 = t1->rc;
			}
		}
		if(item <= t2->data)
		{
			t2->lc =t;
		}
		else
		{
			
			t2->rc =t;
		}
	}


}

void Inorder(struct node *t)
{
	if(t!=NULL)
	{
		Inorder(t->lc);
		printf(" %d ",t->data);
		Inorder(t->rc);	
	}
}

void Preorder(struct node *t)
{
	if(t!=NULL)
	{
		printf(" %d ",t->data);
		Preorder(t->lc);
		Preorder(t->rc);	
	}
}

void Postorder(struct node *t)
{
	if(t!=NULL)
	{
		Postorder(t->lc);
		Postorder(t->rc);	
		printf(" %d ",t->data);

	}
}

void  Node_count(struct node *t)
{
	if(t!=NULL)
	{
		Node_count(t->lc);
		cnt++;
		Node_count(t->rc);	

	}

}

void count_leaf_node(struct node *t)
{
	if(t!=NULL)
	{
		count_leaf_node(t->lc);
		if(t->lc==NULL && t->rc==NULL)
		{
			cnt++;
		}
		count_leaf_node(t->rc);	
	}
}

void Display_leaf_node(struct node *t)
{
	if(t!=NULL)
	{
		Display_leaf_node(t->lc);
		if(t->lc==NULL && t->rc==NULL)
		{
			printf("%d ",t->data);
		}
		Display_leaf_node(t->rc);	
	}
}

void  count_nonleaf_node(struct node *t)
{
	if(t!=NULL)
	{
		count_nonleaf_node(t->lc);
		if(t->lc!=NULL || t->rc!=NULL)
		{
			cnt++;
		}
		count_nonleaf_node(t->rc);	
	}
}


void Display_nonleaf_node(struct node *t)
{
	if(t!=NULL)
	{
		Display_nonleaf_node(t->lc);
		if(t->lc!=NULL || t->rc!=NULL)
		{
			printf("%d ",t->data);
		}
		Display_nonleaf_node(t->rc);	
	}
}

int search(struct node *t,int key)
{
	while(t!=NULL)
	{
		if(key == t->data)
		{
			return 1;
		}
		else if(key <= t->data)
		{
			t=t->lc;
		}
		else
		{
			t=t->rc;
		}
	}
	return 0;
}


int main()
{
	init();
	int n;
	int data;

	printf("how many number :");
	scanf("%d",&n);


	for(int i=0;i<n;i++)
	{
		printf("enter data:");
		scanf("%d",&data);
		bst(data);
	}

	printf("\nInoderwise_Print:");
	Inorder(root);

	printf("\nPostorderwise_Print:");
	Postorder(root);

	printf("\nPreorderwise_Print:");
	Preorder(root);

	cnt=0;
	Node_count(root);
	printf("\ntotal no of  node in tree :%d ",cnt);

	cnt=0;
	count_leaf_node(root);
	printf("\nLeaf node count %d ",cnt);

	printf("\nDisplay leaf node:");
	Display_leaf_node(root);


    cnt =0;
    count_nonleaf_node(root);
    printf("\nNonleaf node count %d ",cnt);

	printf("\nDisplay Nonleaf node:");
	Display_nonleaf_node(root);

	int key;
	printf("\nenter the data to search:");
	scanf("%d",&key);

	if(search(root,key))
	{
		printf("\n data is found ");

	}
	else
	{
		printf("\n data is not found");
	}




}