#include <stdio.h>
#include <stdlib.h>  // for abs()

void findMinDiffPair(int arr[], int size) {
    if (size < 2) {
        return;
    }

    int minDiff = abs(arr[0] - arr[1]);
    int minPair1 = arr[0], minPair2 = arr[1];

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int diff = abs(arr[i] - arr[j]);

            if (diff < minDiff) {
                minDiff = diff;
                minPair1 = arr[i];
                minPair2 = arr[j];
            }
        }
    }

}

int main() {
    int size;
    scanf("%d", &size);

    if (size <0) {
       
        return -1;
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMinDiffPair(arr, size);

    return 0;
}
