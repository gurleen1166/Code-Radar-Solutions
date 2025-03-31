// Your code here...
#include<stdio.h>
void selectionSort(int arr[], int n ){
    for(int i=0;i<n-1;i++){
    int m= arr[i];
    int loc= i+1;
    for(int j=i+1;j<n;j++){
        if(m>arr[j]){
            m=arr[j];
            loc=j;
        }
    } if(arr[loc]<arr[i]){
        int temp=arr[loc];
        arr[loc]=arr[i];
        arr[i]=temp;
    }
    }
}
void printArray( int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }      
}