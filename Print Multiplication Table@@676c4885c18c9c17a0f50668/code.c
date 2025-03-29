// Your code here...
#include<stdio.h>
int main(){
    int n,i,cal=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cal=i*n+cal;
    
    printf("n x i = %d",cal);}
    return 0;
}