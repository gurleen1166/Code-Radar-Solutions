// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=n;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}