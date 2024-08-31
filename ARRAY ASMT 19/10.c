#include <stdio.h>
void count_frequency(int[], int);
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array's input\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    count_frequency(arr, size);
    return 0;
}

void count_frequency(int a[], int n)
{
    int min, k, temp;
    for (int i = 0; i < n; i++)
    {
        min = a[i];
        temp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                temp = j;
            }
        }
        k = a[i];
        a[i] = min;
        a[temp] = k;
        printf("%d ",a[i]);
    }
    printf("\n");
    int i=0,j=1,cnt=1;;
    while (i<n-1)
    {
        if(a[i] == a[j])
        {
            while(a[i] == a[j])
            {
                cnt=cnt+1;
                j++; 
            }
            printf("Frequency of %d is %d\n",a[i],cnt); 
            cnt=1;
        }
        else
        {
            printf("Frequency of %d is %d\n",a[i],cnt);   
        }
        i=j;
        j=j+1;
    }
    if(j==n)
        printf("Frequency of %d is %d\n",a[j-1],cnt);   
}