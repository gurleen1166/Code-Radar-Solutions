// Your code here...
#include <stdio.h>

void findLeadersBruteForce(int arr[], int size) {     
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] <= arr[j]) {
                break;
            }
        }
        if (int j == size) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() {
    int arr[];
    int size = sizeof(arr) / sizeof(arr[0]);

    findLeadersBruteForce(arr, size);

    return 0;
}
