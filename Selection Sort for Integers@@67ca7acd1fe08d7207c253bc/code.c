// Your code here...
#include<stdio.h>
void selectionSort(int arr[], int n ){
    for(int i=0;i<n-1;i++){
    int m= arr[i];
    int loc= i+1;
    for(int j=i+1;j<n;j++){
        if(m>a[j]){
            m=a[j];
            loc=j;
        }
    } if(a[loc]<a[i]){
        int temp=a[loc];
        a[loc]=a[i];
        a[i]=temp;
    }
    }
}
void printArray( int arr[], int n){
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }      
}