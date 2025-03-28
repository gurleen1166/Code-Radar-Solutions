// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=i;j++){
            printf("%c",j);
        }
    printf("\n");
    }
}