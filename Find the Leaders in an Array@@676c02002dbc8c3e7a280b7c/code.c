// Your code here...
#include <stdio.h>

void findLeaders(int arr[], int size) {     
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] <= arr[j]) {
                break;
            }
        }
        if ( j == size) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() {
    int arr[size];
    int size = sizeof(arr) / sizeof(arr[0]);
    scanf("%d",&size);
    findLeaders(arr, size);

    for (int i = 0; i < size; i++) {
        scanf("%d",&size);}

    return 0;
}
