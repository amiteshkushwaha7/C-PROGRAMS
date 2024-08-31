#include<stdio.h>
int sort_array(int[],int);
void merge_array(int[], int[],int);

int main()
{
    int size;
    printf("Enter the size of arrays : ");
    scanf("%d",&size);
    int i,arr1[size],arr2[size];
    printf("Enter 1st array's numbers\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 2nd array's numbers\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr2[i]);
    }
    merge_array(arr1,arr2,size);
    return 0;
}

void merge_array(int x[], int y[],int n1)
{
    int i,j,xy[2*n1];
    for(i=0; i<2*n1; i++)
    {
        if(i < n1)
            xy[i] = x[i];
        else
            xy[i] = y[i-n1];
    }
    sort_array(xy, 2*n1);
}

int sort_array(int a[], int n)
{
    
    int i,j,pvt,temp,k;
    for(i=0; i<n; i++)
    {
        pvt = a[i];
        temp = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j] > pvt)
            {
                pvt = a[j];
                temp = j;
            }
        }
        k = a[i];
        a[i] = pvt;
        a[temp] = k;
        printf("%d ",a[i]);
    }
}