#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // input numbers
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {   // divisible by 2
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {   // not divisible by 2
            printf("%d ", arr[i]);
        }
    }

    return 0;
}