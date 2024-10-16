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

void bobble_sort(int a[],int n)
{
	int t;
	int flag;
	for(int i=n-1;i>0;i--)
	{	
		flag=0;
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;

				flag=1;
			}
		}
		if(flag ==0)
		  break;
	}
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

		bobble_sort(a,n);

		printf("\nafter sort:");
		display(a,n);
	

	return 0;
}