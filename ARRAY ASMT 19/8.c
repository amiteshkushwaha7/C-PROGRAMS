#include<stdio.h>
void unique_element(int [],int);
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array's input\n");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    
    unique_element(arr,size);
    return 0;
}

void unique_element(int a[], int n)
{
    int min,k,temp;
    for(int i=0; i<n; i++)
    {
        min = a[i];
        temp = i;
        for(int j=i+1; j<n; j++)
        {
            if(min > a[j])
            {
                min = a[j];
                temp = j;
            }
        }
        k = a[i];
        a[i] = min;
        a[temp] = k;
    }

    int i=0,j=1,cnt=0;
    int flag = 0;
    while(i<n-1)
    {
        if(a[i] == a[j])
        {
            while(a[i] == a[j])
            {
                j++;
            }
        }
        else
        {
            printf("%d ",a[i]);
            flag = 1;
        }
        i=j;
        j=j+1;
        if(j==n)
        {
            printf("%d",a[j-1]);
            flag = 1;
        }
    }
    if(flag == 0)
    printf("There is no any unique element in this array");
}