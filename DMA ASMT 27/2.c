#include<stdio.h>
#include<stdlib.h>
float calculate_average(int size);
int main()
{
    int size;
    float avg;

    printf("How many numbers you want to enter:");
    scanf("%d",&size);

    avg = calculate_average(size);

    printf("Average = %0.2f", avg);
    return 0;
}

float calculate_average(int size)
{
    int i,sum=0,*p;
    float a;

    p = (int*)malloc(sizeof(int)*size);

    printf("Enter %d Numbers:\n",size);
    for(i=0; i<size; i++)
        scanf("%d", (p+i));

    for(i=0; i<size; i++)
        sum = sum + *(p+i);

    a = (float)sum/size;
    return a;
}