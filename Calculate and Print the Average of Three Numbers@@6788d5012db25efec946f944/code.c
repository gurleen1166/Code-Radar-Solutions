#include <stdio.h>
int main(){
    int a,b,c;
    float result;
    scanf("%d%d%d",&a,&b,&c);
    result=int(a+b+c)/3;
    printf("Average: %.2f",result);
    return 0;
}