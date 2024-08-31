#include<stdio.h>
#define size 5
int main()
{
    int a[size],i,j,pvt,max,temp;
    printf("Enter %d numbers\n",size);
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1; i<size; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            temp = i;
        }
    }

    for(i=0; i<size; i++)
    {
        pvt = a[i];
        if(pvt < max)
        {
            for(j=i+1; j<size && j!=temp; j++)
            {
                if(pvt < a[j])
                    pvt = a[j];
            }
            printf("The second largest element of the array is : %d",pvt);
            break;
        }
    }
    return 0;
}