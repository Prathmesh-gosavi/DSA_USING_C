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

void insertion_sort(int a[],int n)
{
	int t,i,j;
	for( i=1;i<n;i++)
	{
		t=a[i];
		for( j=i-1;j>=0;j--)
		{
			if(a[j]>t)
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1]=t;

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

		insertion_sort(a,n);

		printf("\nafter sort:");
		display(a,n);
	

	return 0;
}