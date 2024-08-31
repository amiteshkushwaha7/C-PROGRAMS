#include<stdio.h>
int main()
{
    int a[10],i=0,sum=0;
    float avg;
    printf("Enter 10 numbers\n");
    for(i=0; i<=9; i++)
        scanf("%d",&a[i]);
    for(i=0; i<=9; i++)
        sum=sum+a[i];
    avg=sum/10.0;
    printf("Average = %0.2f",avg);
    return 0;
}