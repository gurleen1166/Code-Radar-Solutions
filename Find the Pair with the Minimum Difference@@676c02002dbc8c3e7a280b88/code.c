#include <stdio.h>

// Bubble sort
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Find minimum difference pair
void findMinDiffPair(int arr[], int size) {
    if (size < 2) {
        return;
    }

    sortArray(arr, size);

    int minDiff = arr[1] - arr[0];
    int a = arr[0], b = arr[1];

    for (int i = 1; i < size - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            a = arr[i];
            b = arr[i + 1];
        }
    }

    printf("%d %d\n", a, b);
}

int main() {
    int size;
    if (scanf("%d", &size) == 1 ) {
        
        return -1; // return from main if size is invalid
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return -1;
        }
    }

    findMinDiffPair(arr, size);

    return 0;
}
