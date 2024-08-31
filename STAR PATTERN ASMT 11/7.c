#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1; i<=5; i++){
        for(j=1; j<i; j++){
            printf(" ");
        }
        for(k='A'; k<='F'-i; k++){
            printf("%c",k);
        }
        printf("\n");   
    }
    return 0;
}