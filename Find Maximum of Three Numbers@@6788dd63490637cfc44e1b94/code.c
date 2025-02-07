#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a >= b && a >= c) {
        printf("%d", a);
    } 
    else if (b >= a && b >= c) {  // Fixed `if else` to `else if`
        printf("%d", b);
    } 
    else {  // `else` does not need a condition
        printf("%d", c);
    }

    return 0;
}
