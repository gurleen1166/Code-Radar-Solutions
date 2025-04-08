#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main() {
    int size;
    scanf("%d", &size);
    if (size < 2) {
        
        return -1;
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Sort array
    sortArray(arr, size);

    // Step 2: Find minimum difference between adjacent sorted elements
    int minDiff = abs(arr[1] - arr[0]);
    int a = arr[0], b = arr[1];

    for (int i = 1; i < size - 1; i++) {
        int diff = abs(arr[i+1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            a = arr[i];
            b = arr[i+1];
        }
    }

    printf("%d %d\n", a, b);
    return 0;
}
