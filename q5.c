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

    printf("Alternate elements: ");
    for (int i = 0; i < n; i += 2) {   // step by 2
        printf("%d ", arr[i]);
    }

    return 0;
}
