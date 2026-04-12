/*
Problem 5:
Remove duplicates from the sorted array in-place.
*/

#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int i;
    int index = 0;

    if (n == 0) {
        return 0;
    }

    for (i = 1; i < n; i++) {
        if (arr[i] != arr[index]) {
            index++;
            arr[index] = arr[i];
        }
    }

    return index + 1;
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n;
    int i;
    int newLength;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    newLength = removeDuplicates(arr, n);

    printArray(arr, newLength);

    return 0;
}
