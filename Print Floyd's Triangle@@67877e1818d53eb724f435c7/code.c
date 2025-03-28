// Your code here...
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        alphabet='A';
        for(j=1;j<=i;j++){
            printf("%c ",j);
        j++;
        }
        printf("\n");
    }
}