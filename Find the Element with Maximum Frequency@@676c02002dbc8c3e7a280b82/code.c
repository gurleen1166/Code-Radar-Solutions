#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0;
    int mostFrequent = arr[0];

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq || (count == maxFreq && arr[i] < mostFrequent)) {
            maxFreq = count;
            mostFrequent = arr[i];
        }
    }

    printf("%d\n", mostFrequent);
    return 0;
}
