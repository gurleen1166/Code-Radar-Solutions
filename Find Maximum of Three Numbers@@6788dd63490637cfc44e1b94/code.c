#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c){
        printf("%d",a);
    }
    if  (b>=a && b>=c){
        printf("%d",b);
    }
    if (c>=b && c>=a){
        printf("%d",c);
    }
    if (a==b==c==0){
        printf("%d",a);
    }
    return 0;
}