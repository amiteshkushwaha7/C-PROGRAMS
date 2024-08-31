#include<stdio.h>
int main()
{
    int a,b,append;
    printf("Enter a Number and a Digit");
    scanf("%d %d",&a,&b);
    append=a*10;
    append=append+b;
    printf("Append Number=%d",append);
    return 0;
}