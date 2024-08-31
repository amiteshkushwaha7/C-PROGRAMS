#include<stdio.h>
#define size 5
void swap(int [], int);
int main()
{
    int arr[size];
    swap(arr,size);
    return 0;
}
void swap(int arr[], int n)
{
    int i,a,b,k;
    printf("Enter %d numbers\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Enter 2 index to swapping\n");
    scanf("%d %d",&a,&b);
    k = arr[a];
    arr[a] = arr[b];
    arr[b] = k;
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}




























