#include<stdio.h>
int main()
{
    int a=5,b=4;
    a=a+b-(b=a);
    printf("a=%d b=%d",a,b);
    return 0;
}