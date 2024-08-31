#include<stdio.h>
int main()
{
    int i,j;
    char k,c='A';
    for(i=1; i<=5; i++){
        for(j=1; j<i; j++){
            printf(" ");
        }
        for(int k=i; k<=5; k++){
            printf("%c",c+k-1);
        }
        printf("\n");
    }
    return 0;
}