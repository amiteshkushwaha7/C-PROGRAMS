#include<stdio.h>
int main()
{
    int n,sum=0,x;
    printf("Enter a Number");
    scanf("%d",&n);
    for(x=1;x<=n;x++){
        sum=sum+x;
    }
    printf("%d",sum);
    return 0;
}