/*
Problem3:
An element is a leader if it is greater than all elements to its right.
Example:
Input: [16,17,4,3,5,2]
Output: [17,5,2]
*/

#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[100];
    int count = 0;
    int maxFromRight;
    int i;

    if (n == 0) {
        return;
    }

    maxFromRight = arr[n - 1];
    leaders[count++] = maxFromRight;

    for (i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    for (i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
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

    findLeaders(arr, n);

    return 0;
}
