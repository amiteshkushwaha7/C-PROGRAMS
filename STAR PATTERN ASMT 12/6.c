#include<stdio.h>
int main()
{
    int i,j,n=4;
    char c='A';
    for(j=1; j<=n; j++, c++){
        printf("%c",c);
    }
    for(j=1, c=c-2; j<=n-1; j++, c--){
        printf("%c",c);
    }
    printf("\n");
    for(i=1; i<=n-1; i++){
        for(j=1; j<=i; j++){
            printf(" ");
        }
        for(j=1, c='A'; j<=n-i; j++, c++){
            printf("%c",c);
        }
        for(j=1, c=c-2; j<=(n-1)-i; j++, c--){
            
            printf("%c",c);
        }
        for(j=1; j<=i; j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}