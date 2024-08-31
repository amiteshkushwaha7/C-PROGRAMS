#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter a three digits number");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    b=b+a%10;
    a=a/10;
    b=b+a;
    printf("Sum of Digits=%d",b);
    return 0;
}