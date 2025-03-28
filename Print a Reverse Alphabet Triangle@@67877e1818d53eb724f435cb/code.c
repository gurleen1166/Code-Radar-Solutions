// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    char alphabet;
    scanf("%d",&n);
    // alphabet='A';
    for(i=1;i<n;i++){
        alphabet='A';
        for(j=1;j>=i;j--){
            printf("%c",j);
        }
    printf("\n");
    }

}