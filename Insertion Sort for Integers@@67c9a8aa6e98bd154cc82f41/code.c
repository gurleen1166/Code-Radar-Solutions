// Your code here...
#include<stdio.h>
void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j>=1;j--){
            if(arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void printArray(int arr[], int n){
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
