#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter a Number\n");
    scanf("%d",&n);
    for(n=(n+1); ;n++){
        for(x=2; x<=n-1; x++){
            if(n%x==0){
                break;
            }
        }
        if(n==x){
            printf("Next Prime Number is %d",n);
            break;
        }
    }
    return 0;
}