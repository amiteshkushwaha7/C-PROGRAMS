#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Year ");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0 || a%400==0)
           printf("Year is a Leap Year");
    else
           printf("Year is not a Leap Year");
    return 0;
}