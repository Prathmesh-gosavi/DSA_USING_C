#include<stdio.h>

void accept(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		printf("enter the data");
		scanf("%d",&a[i]);
	}

}

void improved_bobble_sort(int a[],int n)
{
	int temp_num;
	int flag;
	

	for(int i=n-1;i>0;--i)
	{
		flag=0;
		for(int j=0;j<i;++j)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				temp_num=a[j];
				a[j]=a[j+1];
				a[j+1]=temp_num;

			}

		}
		if(flag==0)
		  {
	     	break;
	      }
				

}

}

void display(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		printf("%d  ",a[i]);
	}
}




int main()
{
	
	int a[50];
	int n;

	printf("how many element");
	scanf("%d",&n);

	accept(a,n);

	improved_bobble_sort(a,n);

	display(a,n);

	return 0;
}