#include <stdio.h>

// Simple bubble sort
void sortArray(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to get absolute difference without using abs()
int getDiff(int a, int b) {
    return (a > b) ? (a - b) : (b - a);
}

int main() {
    int size;
    scanf("%d", &size);

    if (size==1) {
        return -1;
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, size);

    int minDiff = getDiff(arr[0], arr[1]);
    int a = arr[0], b = arr[1];

    for (int i = 1; i < size - 1; i++) {
        int diff = getDiff(arr[i], arr[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            a = arr[i];
            b = arr[i + 1];
        }
    }

    // Already sorted, so a < b guaranteed
    printf("%d %d\n", a, b);

    return 0;
}
