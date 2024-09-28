#include <stdio.h>
#include <stdlib.h>

#define MAX_USERS 3 



struct student {
    int rno;
    char name[20];
    float per;
};



void accept(struct student *s, int n);
void display(struct student *s, int n);

int main() {
    struct student *students;

  
    students = (struct student *)malloc(MAX_USERS * sizeof(struct student));

    
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    

  
    accept(students, MAX_USERS);
    display(students, MAX_USERS);

  
    free(students);

    return 0;
}


void accept(struct student *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter the roll number: ");
        scanf("%d", &s[i].rno);

        printf("Enter the name: ");
        scanf("%s", s[i].name);

        printf("Enter the percentage: ");
        scanf("%f", &s[i].per);

        printf("\n");
    }
}


void display(struct student *s, int n) {
    printf("Student Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", s[i].rno);
        printf("Name: %s\n", s[i].name);
        printf("Percentage: %.2f\n\n", s[i].per);
    }
}
