#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    
    if (a > b) {
        printf("True %d",a);
    } else {
        printf("False %d",b);
    }

    return 0;

}