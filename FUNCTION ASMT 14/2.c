#include<stdio.h>
float si(float,float,float);
int main()
{
    float p,r,t;
    printf("Enter the value of p,r,t\n");
    scanf("%f %f %f",&p,&r,&t); //p 3 // r 5 // t 7
    float SI=si(p,r,t); //si(3,5 ,7)
    printf("SI =%.2f",SI);
    return 0;
}
float si(float p , float r,float t)
{
    float a=((p*r*t)/100);
    return a;
}