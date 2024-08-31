#include<stdio.h>
int main()
{
    float p,r,t,SI;
    printf("Enter the p,r,t");
    scanf("%f %f %f",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("SI of p,r,t is %f,%f and %f is %f",p,r,t,SI);
    return 0;
}