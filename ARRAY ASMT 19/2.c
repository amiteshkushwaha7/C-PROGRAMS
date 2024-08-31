#include<stdio.h>
#define size 5
int smallest_num(int [], int);
int main()
{
    int s,arr[size];
    s = smallest_num(arr,size);
    printf("The smallest number of the array is : %d",s);
    return 0;
}

int smallest_num(int a[], int n)
{
    int i,min;
    printf("Enter %d numbers\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(i=1; i<n; i++)
    {
        if(min > a[i])
            min = a[i];
    }
    return min;
}