// Your code here...
#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    k = k % n;  // Handle k > n

    for (int r = 0; r < k; r++) {
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    // Read array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rightRotate(arr, n, k);

    // Output rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
