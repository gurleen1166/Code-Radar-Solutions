#include <stdio.h>
int main(){
    int a,result;
    scanf("%d",&a);
    result=a&1;
    if (result==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}