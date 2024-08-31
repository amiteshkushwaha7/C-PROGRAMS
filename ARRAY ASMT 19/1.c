#include<stdio.h>
#define size 5
int greatest_num(int[size]);
int main()
{
    int arr[size];
    printf("The greatest number of the array is : %d",greatest_num(arr));
    return 0;
}

int greatest_num(int a[size])
{
    int i,max;
    printf("Enter %d numbers\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=1; i<size; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    return max;
}