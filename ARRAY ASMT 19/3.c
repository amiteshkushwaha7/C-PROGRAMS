#include<stdio.h>
#define size 5
void sort(int a[], int n)
{
    int i,j,min,pvt,temp;
    printf("Enter %d numbers\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        pvt = a[i];
        temp = i;
        for(j=i+1; j<n; j++)
        {
            if(pvt > a[j])
            {
                pvt = a[j];
                temp = j;
            }
        }
        min = a[i];
        a[i] = pvt;
        a[temp] = min;
        printf("%d ",a[i]);
    }
}
int main()
{
    int arr[size];
    sort(arr,size);
    return 0;
}
