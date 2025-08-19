#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;      // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;            // divisible ? not prime
        }
    }
    return 1;                    // prime
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);    // input numbers
    }

    printf("Prime numbers in array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) 
		{
            printf("%d ", arr[i]);   // print only primes
            }
    }

    return 0;
}
