#include <stdio.h>

void findLeaders(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int j;
        for (j = i + 1; j < size; j++) {
            if (arr[i] <= arr[j]) {
                break;
            }
        }
        if (j == size) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size]; // Variable Length Array (VLA)

   
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    findLeaders(arr, size);

    return 0;
}
