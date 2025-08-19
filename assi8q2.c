#include <stdio.h>

int main() {
    int arr[100], n, i, num, found = 0;

    // Input size of array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number to search
    printf("Enter the number to search: ");
    scanf("%d", &num);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            printf("Number found at position %d\n", i + 1); // positions start at 1
            found = 1;
            break; // stop after finding first match
        }
    }

    if(!found) {
        printf("Number not found in array.\n");
    }

    return 0;
}