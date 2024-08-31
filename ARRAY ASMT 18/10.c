#include<stdio.h>
#define size 5
int main()
{
    int a[size],b[size];
    printf("Enter %d numbers\n", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<size; i++)
    {
        b[i] = a[i];
        printf("%d ",b[i]);
    }
    return 0;
}