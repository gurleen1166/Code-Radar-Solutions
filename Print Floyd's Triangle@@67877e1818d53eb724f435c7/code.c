// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    int digit=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       
        for(j=1;j<=i;j++){
            printf("%d ",digit);
            digit++;
        }
        printf("\n");
    }
}