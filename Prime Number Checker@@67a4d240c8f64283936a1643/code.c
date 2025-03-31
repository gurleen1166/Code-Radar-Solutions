#include <stdio.h>

// Function to check if a number is prime
void checkPrime(int arr[], int num) {
    for (int i = 0; i < num; i++) {
        int n = arr[i];
        int isPrime = 1;  // Assume the number is prime initially

        if (n < 2) {
            isPrime = 0;  // Numbers < 2 are not prime
        } else {
            for (int j = 2; j * j <= n; j++) {  // Check divisibility up to sqrt(n)
                if (n % j == 0) {
                    isPrime = 0;  // Not a prime number
                    break;
                }
            }
        }

        // Print 1 if prime, 0 if not
        printf("%d ", isPrime);
    }
    printf("\n"); // Add newline for better formatting
}

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     // Input array elements
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Check if numbers are prime
//     checkPrime(arr, n);

//     return 0;
// }
