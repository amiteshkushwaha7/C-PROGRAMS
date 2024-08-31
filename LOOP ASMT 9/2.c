#include<stdio.h>
int main()
{
    int n,sum=0,x;
    printf("Enter a Number");
    scanf("%d",&n);
    for(x=1;x<=n*2;x++){
        if(x%2==0){
            sum=sum+x;
        }
    }
    printf("%d",sum);
    return 0;
}