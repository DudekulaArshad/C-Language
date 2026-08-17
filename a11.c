#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];
    int x;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    x = strcmp(str1, str2);

    if (x == 0) {
        printf("Strings are equal");
    }
    else if (x > 0) {
        printf("First string is greater than second string");
    }
    else {
        printf("First string is less than second string");
    }

    return 0;
}