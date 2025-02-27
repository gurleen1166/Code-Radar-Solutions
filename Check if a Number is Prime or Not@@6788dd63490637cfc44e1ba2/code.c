// Your code here...
#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    int a;
    scanf("%d", &a);

    // Edge case: if the number is less than or equal to 1, it's not prime
    if (a <= 1) {
        printf("Not Prime");
    }
    // If the number is 2, it's prime (since 2 is the only even prime number)
    else if (a == 2) {
        printf("Prime");
    }
    // If the number is divisible by 2 (and greater than 2), it's not prime
    else if (a % 2 == 0) {
        printf("Not Prime");
    }
    else {
        // Check divisibility for odd numbers from 3 up to the square root of a
        if (a % 3 == 0) {
            printf("Not Prime");
        }
        else if (a % 5 == 0) {
            printf("Not Prime");
        }
        else if (a % 7 == 0) {
            printf("Not Prime");
        }
        else if (a % 11 == 0) {
            printf("Not Prime");
        }
        else if (a % 13 == 0) {
            printf("Not Prime");
        }
        // Add additional checks if needed (for larger primes) or continue with other logic
        else {
            printf("Prime");
        }
    }

    return 0;
}
