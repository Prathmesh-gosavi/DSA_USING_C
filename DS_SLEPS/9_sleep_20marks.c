#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 50

struct Employee {
    char name[50];
    int age;
};

void bubbleSort(struct Employee employees[], int n) {
    struct Employee temp;

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (employees[j].age > employees[j + 1].age) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    FILE *fr, *fw;
    int count = 0;

    fr = fopen("employee.txt", "r");
    if (fr == NULL) {
        printf("Error: employee.txt could not be opened.\n");
        return 1;
    }

    while (fscanf(fr, "%49[^,],%d\n", employees[count].name, &employees[count].age) == 2) {
        count++;
        if (count >= MAX_EMPLOYEES) {
            break;
        }
    }
    fclose(fr);

    if (count == 0) {
        printf("No employee data read from the file.\n");
        return 1;
    }

    bubbleSort(employees, count);

    fw = fopen("sortemp.txt", "w");
    if (fw == NULL) {
        printf("Error: sortemp.txt could not be opened for writing.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fw, "%s,%d\n", employees[i].name, employees[i].age);
    }
    fclose(fw);

    printf("Sorted employee data written to sortemp.txt.\n");

    return 0;
}
