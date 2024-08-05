#include <stdio.h>

void accept(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the data: ");
        scanf("%d", &a[i]);
    }
}

void bubble_sort(int a[], int n) {
    int i, j, temp;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void display(int a[], int n) {
    printf("Displaying sorted data: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[50];
    int n;

    printf("How many elements? ");
    scanf("%d", &n);

    accept(a, n);
    bubble_sort(a, n);
    display(a, n);

    return 0;
}
