/*
Problem4:
Compress string by counting consecutive characters.
Example:
Input: "aaabbc"
Output: "a3b2c1"
*/

#include <stdio.h>
#include <string.h>

void compressString(char str[]) {
    int length = strlen(str);
    int count = 1;
    int i;

    for (i = 0; i < length; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    compressString(str);

    return 0;
}
