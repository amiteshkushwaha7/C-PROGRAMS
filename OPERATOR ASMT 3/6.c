#include<stdio.h>
int main()
{
    int a=8,b=4,c;
    c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d",a,b);
    return 0;
}