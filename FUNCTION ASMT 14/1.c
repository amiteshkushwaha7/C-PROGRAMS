#include<stdio.h>
float area(float);
int main(){
        float x;
        printf("Enter the Radious of Circle\n");
        scanf("%f",&x);
        float b=area(x);
        printf("%.2f",b);
        return 0;
}
float area(float r)
{
    float a;
    a=(3.14*r*r);
    return a;
}