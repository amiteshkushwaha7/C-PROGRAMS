#include<stdio.h>
int main()
{
    int i,j,n=4,k;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        for(k=(j-2); k>=1; k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}