// Your code here...
// Your code here...
#include <stdio.h>

int main() {
    char lights;

    scanf("%c", &lights);
    
    switch (lights) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
    
        default:
            printf("Invalid input ");
    }
    
    return 0;
}
