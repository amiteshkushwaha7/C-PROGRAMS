#include<stdio.h>
int main()
{
    double d;
    int x;
    printf("Enter a Real Number");
    scanf("%dl",&d);
    x=sizeof(d);
    printf("%d",x);
    return 0;
}