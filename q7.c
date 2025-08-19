#include <stdio.h>

int main() {
    int n;
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    printf("Enter %d elements of first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements of second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Adding element by element
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("Resultant sum array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}