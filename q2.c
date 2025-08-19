#include <stdio.h>

int main() {
    int n;                          // number of elements
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];                     // array declaration
    int sum = 0;                     // to store the total sum

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);        // input elements
        sum += arr[i];               // add each element to sum
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}