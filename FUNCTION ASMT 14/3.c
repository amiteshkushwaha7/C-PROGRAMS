#include<stdio.h>
int eoN(int);
int main()
{
    int n,x;
    printf("Enter a number\n");
    scanf("%d",&n);
    x=eoN(n);
    x==1? printf("Given number is even number"): printf("Given number is odd number");
    return 0;
    
}
int eoN(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}