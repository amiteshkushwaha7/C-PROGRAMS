#include<stdio.h>
int main()
{
    float x,y,z,Avg;
    printf("Enter Three Number");
    scanf("%f %f %f",&x,&y,&z);
    Avg=(x+y+z)/3;
    printf("Average of %f,%f and %f is %f",x,y,z,Avg);
    return 0;
}