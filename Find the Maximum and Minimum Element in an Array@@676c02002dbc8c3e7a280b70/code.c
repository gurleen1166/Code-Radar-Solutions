// Your code here...
#include<stdio.h>
int main(){
    int a[],size,i,max,min;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];
     for(i=0;i<size;i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    max=a[0];
     for(i=0;i<size;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d %d",min,max);
}