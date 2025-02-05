#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    
    if (a > b) {
        printf("True %d",a,b);
    } else {
        printf("False %d",a,b);
    }

    return 0;

}