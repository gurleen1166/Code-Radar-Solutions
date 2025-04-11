// Your code here...
#include <stdio.h>

// Function to sort array in descending order
void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n] ; 

    // Read array elements from user
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sortDescending(arr, n);

    int secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            secondLargest = arr[i];
            break;
        }
    }

    printf("%d\n", secondLargest);

    return 0;
}
