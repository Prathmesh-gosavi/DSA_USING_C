#include<stdio.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("enter the data");
        scanf("%d",&a[i]);
    }

}
void bobble_sort(int a[],int n)
{
    int t;

    for(int i=n-1;i>0;--i)
    {
        for(int j=0;j<i;++j)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
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

    int n;
    int a[30];

    printf("how many element");
    scanf("%d",&n);

    accept(a,n);

    bobble_sort(a,n);

    display(a,n);

    return 0;

}