#include <stdio.h>

int main() {
    int a[100], b[100], sum[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        sum[i] = a[i] + b[i];

    printf("Sum of arrays:\n");
    for(i = 0; i < n; i++)
        printf("%d ", sum[i]);

    return 0;
}