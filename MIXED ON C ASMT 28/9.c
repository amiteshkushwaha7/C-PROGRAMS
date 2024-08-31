#include<stdio.h>
void count_maximum_frequency_element(int *q, int n)
{
    int i,j,k=0,temp1,temp2,cnt;
    for(i=0; i<n; i++)
    {
        cnt=1;
        for(j=i+1; j<n; j++)
        {
            if(*(q+i) == *(q+j))
            {
                cnt = cnt + 1;
                temp1 = *(q+j);
                i=j;
            }
            else
                break;
        }
        
        if(cnt > k)
        {
            k = cnt;
            temp2 = temp1;
        }
    }
    printf("\nMaximum Frequency Number:%d and frequency:%d",temp1,k); 
}

void sort_array(int *p, int n)
{
    int i,j,k,min,temp;
    for(i=0; i<n; i++)
    {
        min = *(p+i);
        temp = i;
        for(j=i+1; j<n; j++)
        {
            if(min > *(p+j))
            {
                min = *(p+j);
                temp = j;
            }
        }
        k = *(p+i);
        *(p+i) = min;
        *(p+temp) = k;
    }

    for(i=0; i<n; i++)
        printf("%d ",*(p+i));
}

int main()
{
    int size;
    printf("Enter Total Numbers:");
    scanf("%d",&size);

    int i,arr[size];
    printf("Enter %d Numbers:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    sort_array(arr, size);
    count_maximum_frequency_element(arr, size);

    return 0;
}