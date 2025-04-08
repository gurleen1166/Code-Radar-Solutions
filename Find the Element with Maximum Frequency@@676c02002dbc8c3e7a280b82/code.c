#include <stdio.h>
#include <limits.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0;
    int mostFrequent = INT_MAX;

    for (int i = 0; i < size; i++) {
        int count = 1;

        // Count frequency of arr[i]
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if this is a new max frequency
        if (count > maxFreq || (count == maxFreq && arr[i] < mostFrequent)) {
            maxFreq = count;
            mostFrequent = arr[i];
        }
    }

    printf("%d\n", mostFrequent);
    return 0;
}
