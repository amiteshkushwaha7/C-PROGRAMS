#include<stdio.h>
int main()
{
    int n,x,revN=0;
    printf("Enter a Number ");
    scanf("%d",&n);
    for(;(n/10)>0;){
        x=n%10;
        revN=(revN+x)*10;
        n=n/10;
    }
    revN=revN+n;
    printf("%d",revN);
    return 0;
}       