#include<stdio.h>
int main()
{
    int i,j=1,k;
    for(i=1; i<=4; i++){
        for(j=j,k=1; k<=i; j++,k++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}