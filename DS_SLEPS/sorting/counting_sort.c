#include <stdio.h>
#include <stdlib.h>

void countingSort(int arr[], int size) {
    // Find the maximum value in the array
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Create a count array to store the count of each unique object
    int* count = (int*)calloc(max + 1, sizeof(int));

    // Store the count of each element
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Build the output array
    int output[size];
    int index = 0;

    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            output[index++] = i;
            count[i]--;
        }
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }

    // Free allocated memory for count array
    free(count);
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
