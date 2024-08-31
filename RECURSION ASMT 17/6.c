#include<stdio.h>
int fact(int);
int main()
{
    int n,fct;
    printf("Enter a number\n");
    scanf("%d",&n);
    fct=fact(n);
    printf("Factorial of the given number is %d",fct);
    return 0;
}
int fact(int x)
{
    int f;
    if(x==1)
        return 1;
    f=x*fact(x-1);
    return f;
}