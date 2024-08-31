#include<stdio.h>
int main()
{
    int i,j,k,n=4;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i ;j++){
            printf(" ");
        }
        for(j=1,k=1; j<=i; j++)
        {
            if(j%2!=0)
            {
                printf("%d",k);
                if(j!=i){
                    k++;
                }
            }
            else
            {
                printf(" ");
            }
        }
        for(j=j-2, k=k-1;  j>=1;  j--){
            if(j%2!=0)
            {
                printf("%d",k);
                k--;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}