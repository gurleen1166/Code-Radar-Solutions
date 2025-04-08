#include <stdio.h>

 #define MAX 1000  // Max possible value in array elements

void findMaxFrequency(int arr[], int size) {
    int freq[MAX] = {0};  // Frequency array
    int maxCount = 0;
    int mostFrequent;

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] > maxCount) {
            maxCount = freq[arr[i]];
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
        if (arr[i] < 0 || arr[i] >= MAX) {
            
            return 1;
        }
    }

    findMaxFrequency(arr, size);

    return 0;
}
