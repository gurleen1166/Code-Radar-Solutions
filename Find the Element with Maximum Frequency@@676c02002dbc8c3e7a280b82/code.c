// Your code here...
#include <stdio.h>

void findMaxFrequency(int arr[], int size) {
    int maxCount = 0;
    int mostFrequent;

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxFrequency(arr, size);

    return 0;
}
