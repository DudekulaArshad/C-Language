#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] % 5 == 0)
            sum += arr[i];
    }

    printf("Sum of multiples of 5 = %d", sum);
    return 0;
}