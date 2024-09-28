#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void accept(char **a, int n) {
    for(int i = 0; i < n; ++i) {
        a[i] = (char *)malloc(100 * sizeof(char));  // Allocate memory for each string
        if(a[i] == NULL) {
            printf("Memory allocation failed\n");
            exit(0);
        }
        printf("Enter string %d: ", i + 1);
        scanf("%s", a[i]);  // Read each string
    }
}

void display(char **a, int n) {
    for(int i = 0; i < n; ++i) {
        printf("%s ", a[i]);  // Print each string
    }
    printf("\n");
}

void bubble_sort(char **a, int n) {
    for(int i = n - 1; i > 0; --i) {
        for(int j = 0; j < i; ++j) {
            if(strcmp(a[j], a[j + 1]) > 0) {  // Compare strings
                // Swap the strings
                char *temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int number;
    char **array;  // Pointer to an array of strings

    printf("How many strings do you want to store: ");
    scanf("%d", &number);

    // Allocate memory for an array of string pointers
    array = (char **)malloc(number * sizeof(char *));
    if(array == NULL) {
        printf("Insufficient memory to allocate dynamically\n");
        exit(0);
    }

    accept(array, number);

    printf("\nBefore sort: ");
    display(array, number);

    bubble_sort(array, number);
    printf("\nAfter sort: ");
    display(array, number);

    // Free allocated memory for each string
    for(int i = 0; i < number; ++i) {
        free(array[i]);
    }
    free(array);  // Free the array of string pointers

    return 0;
}
