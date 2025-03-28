// // Your code here...
// #include<stdio.h>
// int main(){
//     int n,i,j;
//     char alphabet;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//          alphabet='A';
//         for(j=n;j>=i;j--){
//             printf("%c",alphabet);
//             alphabet++;
//         }
//     printf("\n ");
//     }

// }





// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,alphabet;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        alphabet='A'
        for(j=1;j<=i;j++){
            printf("%d ",alphabet);
            alphabet++;
        }
        printf("\n");
    }
}