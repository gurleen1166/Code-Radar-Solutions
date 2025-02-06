#include <stdio.h>
int main(){
    char character;
    scanf("%c",&character);
    if(character>='A' && character<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}