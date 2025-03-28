// Your code here...
#include<stdio.h>
int main(){
    int a[100],i,even,odd,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    even=a[0];
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even=a[i];
        }

    }
    odd=a[0];
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            odd=a[i];
        }

    }
    printf("%d %d",even,odd);
}