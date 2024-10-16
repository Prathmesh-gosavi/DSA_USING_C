#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 50


struct employee
{
	char name[50];
	int age;
};

void bubbleSort(struct employee arr[], int n) {
    int i, j;
    struct employee temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].age > arr[j + 1].age) {
                temp = arr[j];       //the swaping age and name not only age bcz of this line arr[j] not arr[j].age;
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
	struct employee emp[SIZE];

	FILE *fpr,*fpw;

	fpr=fopen("employe.txt","r");
	if(fpr==NULL)
	{
		printf("not open employe.txt");
		return 1;
	}

	int n=0;
	while(fscanf(fpr,"%s %d",emp[n].name,&emp[n].age)!=EOF){

		n++;
	}


 	fclose(fpr);

    bubbleSort(emp, n);



	fpw=fopen("sortempage.txt","w");
	if(fpw==NULL)
	{
		printf("file is not open to writing");
		return 1;
	}

	for(int i=0;i<n;i++)
	{
		fprintf(fpw,"%s %d\n", emp[i].name, emp[i].age);
	}


	fclose(fpw);

    printf("Employee data sorted and written to sortedemponage.txt successfully.\n");



	return 0;
}



 