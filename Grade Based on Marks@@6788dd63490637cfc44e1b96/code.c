#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=0){
        printf("A",a);
    }
    if(a>=80 && a<90){
        printf("B",a);
    }
     if(a>=70 && a<80){
        printf("C",a);
    }
    if(a>=60 && a<70){
        printf("D",a);
    }
    if (a<60){
        printf("F",a);
    }
    return 0;
    
}