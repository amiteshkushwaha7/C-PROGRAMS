#include<stdio.h>
int main()
{
    int i,j,n=7;
    for(j=1; j<=n; j++){
        printf("%d",j);
    }
    for(j=j-2; j>=1; j--){
        printf("%d",j);
    }
    printf("\n");
    for(i=1; i<=n-1; i++){
        for(j=1; j<=n-i; j++){
            printf("%d",j);
        }
        for(j=1; j<=2*i-1; j++){
            printf(" ");
        }
        for(j=n-i; j>=1; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}