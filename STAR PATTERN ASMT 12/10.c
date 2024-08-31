#include<stdio.h>
int main()
{
    int i,j,n=4;
    char c='A';
    for(j=1; j<=n; j++,c++){
        printf("%c",c);
    }
    for(j=1,c=c-2; j<=n-1; j++,c--){
        printf("%c",c);
    }
    printf("\n");
    for(i=1; i<=n-1; i++){
        for(j=1; j<=n-i; j++){
            printf("%c",c+j);
        }
        for(j=1; j<=2*i-1; j++){
            printf(" ");
        }
        for(j=n-i; j>=1; j--){
            printf("%c",c+j);
        }
        printf("\n");
    }
    return 0;
}