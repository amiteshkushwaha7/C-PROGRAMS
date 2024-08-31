#include<stdio.h>
#include<stdlib.h>
void calculate_sum(int size);
int main()
{
    int size;
    printf("How many numbers's sum you want to calculate:");
    scanf("%d",&size);

    calculate_sum(size);
    return 0;
}

void calculate_sum(int size)
{
    int i,sum=0,*p;
    p = (int*)malloc(sizeof(int)*size);

    printf("Enter %d Numbers:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(p+i));

    for(i=0; i<size; i++)
        sum = sum + *(p+i);

    printf("Sum = %d",sum);
}