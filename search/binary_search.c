#include<stdio.h>

void accept_input(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		printf("enter the data :");
		scanf("%d",&a[i]);
	}
}

void bobble_sort(int a[],int n)
{
	for(int i=n-1;i>=0;--i)
	{
		for(int j=0;j<i;++j)
		{
			if(a[j]>a[i])
			{
				int temp;

				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

void display_array(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("%d  ",a[i]);
    }
}

int binary_search(int a[],int n, int key)
{
	
	int i,j,mid;

	i=0;
	j=n-1;


	while(i<=j)
	{
		mid=(i+j)/2;

		if(a[mid]==key)
		{
			return mid;
		}
		else if( a[mid] > key)
		{
			j=mid-1;
		}
		else
		{
			i=mid+1;
		}
	}


	return -1;
}


int main()
{

	int n;
	int a[40];
	int pos;

	printf("enter the value of n:");
	scanf("%d",&n);

	accept_input(a,n);
	bobble_sort(a,n);
	display_array(a,n);

	int key;

	printf("\nwnich value you want to search:");
	scanf("%d",&key);

	pos = binary_search(a,n,key);	

	if(pos==-1)
	{
		printf("data is not found\n");
	}
	else
	{
		printf("data is %d found at index %d\n",key,pos);
	}


	return 0;
}