#include<stdio.h>
int main()
{
    int a=100,b=75;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("a=%d b=%d",a,b);
    return 0;
}