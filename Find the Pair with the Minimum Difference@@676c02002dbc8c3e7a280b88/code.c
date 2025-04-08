#include <stdio.h>

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

void findMinDiffPair(int arr[], int size) {
    sortArray(arr, size);

    int diff = arr[1] - arr[0];
    if (diff < 0) diff = -diff;

    int minDiff = diff;
    int a = arr[0], b = arr[1];

    for (int i = 1; i < size - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < 0) diff = -diff;

        if (diff < minDiff) {
            minDiff = diff;
            a = arr[i];
            b = arr[i + 1];
        }
    }

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("%d %d\n", a, b);
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

    findMinDiffPair(arr, size);

    return 0;
}
