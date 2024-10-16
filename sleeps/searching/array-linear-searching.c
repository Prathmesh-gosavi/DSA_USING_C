#include<stdio.h>

int search(int a[],int n,int key)
{
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
	int key;

	printf("how many data you want to store:");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("enter the data:");
		scanf("%d",&a[i]);
	}

	printf("enter the data to search:");
	scanf("%d",&key);

	int pos;

	pos = search(a,n,key);

	if(pos==-1)
	{
		printf("data is not found");
	}
	else
	{
		printf("data is found %d at pos %d",key,pos);
	}


}