#include<stdio.h>
void arrange(int *p, int size);
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
  
    int i,arr[size];
    printf("\nEnter Array's Inputs:\n");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    arrange(arr, size);

    for(i=0; i<size; i++)
        printf("%d ",arr[i]);

    return 0;
}

void arrange(int *p, int size)
{
    int i, j=0, k, pvt,cnt=0;
    for(i=1; i<size; i++)
    {
        pvt = *(p+j);
        if(*(p+i) < pvt)
        {
            k = *(p+i);
            *(p+i) = pvt;
            *(p+j) = k;
            j=i;
            cnt++;
        }
    }

    k = *(p+cnt);
    *(p+cnt) = pvt;
    *(p+j) = k;
}