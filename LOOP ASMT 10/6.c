#include<stdio.h>
int main()
{
    int n,x;
    printf("All Prime Number between 1 to 100\n");
    for(n=2 ;n<=100 ;n++){
        for(x=2; x<=(n-1); x++){
            if(n%x==0){
                break;
            }
        }
        if(n==x){
            printf("%d\n",n);
        }
    }
    return 0;
} 