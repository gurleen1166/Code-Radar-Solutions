#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c){
        printf("%d",a);
    }
    elif (b>=a && b>=c){
        printf("%d",b);
    }
     elif (c>=b && c>=a){
        printf("%d",c);
    }
    return 0;
}