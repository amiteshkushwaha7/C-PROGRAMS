#include<stdio.h>
int main()
{
    double a,USD=1.0,INR=84.23;
    printf("Enter your INR Amount");
    scanf("%lf",&a);
    a=(USD/INR)*a;
    printf("Your Amount is %lf USD",a);
    return 0;
}