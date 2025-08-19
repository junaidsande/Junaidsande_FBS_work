#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--) {   // start from last element
        printf("%d ", arr[i]);
    }

    return 0;
}