#include<stdio.h>
#include<stdio.h>

void accept(int a[], int n)
{


	for(int i=0;i<n;i++)
	{
		printf("enter data:");
		scanf("%d",&a[i]);

	}
}

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d  ",a[i]);
}

int linear_search(int a[],int n,int key){

	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
		
	}
	return -1;
}


int main()
{
	int n;
	int a[50];

	printf("how many data:");
	scanf("%d",&n);

		accept(a,n);

		printf("\nbefore sort:");
		display(a,n);

		int key;

		printf("enter the data to search:");
		scanf("%d",&key);

		int pos = linear_search(a,n,key);

		if(pos==-1)
		{
			printf("%d is not found",key);
		}
		else
		{
			printf("%d is found at %d index",key,pos);
		}

	return 0;
}