/*
Problem2:
Find an index where left sum = right sum.
Example:
Input: [1,3,5,2,2]
Output: 2
*/

#include <stdio.h>

int findEquilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;
    int i;

    for (i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    for (i = 0; i < n; i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            return i;
        }
        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int arr[100];
    int n;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findEquilibriumIndex(arr, n));

    return 0;
}
