// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    int digit;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        digit=1;
        for(j=1;j<=i;j++){
            printf("%d ",j);
        j++;
        }
        printf("\n");
    }
}