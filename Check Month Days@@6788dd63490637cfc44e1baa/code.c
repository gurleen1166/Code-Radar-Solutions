// Your code here...
#include <stdio.h>

int main() {
    int month;
    

    scanf("%d", &month);
    
    switch (month) {
        case 1,3,5,7,8,10,12:
            printf("31\n");
            break;
        case 2:
            printf("28\n");
            break;
        case 4,6,9,11:
            printf("30\n");
            break;
        default:
            printf("Invalid month ");
    }
    
    return 0;
}
