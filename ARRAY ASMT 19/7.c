#include<stdio.h>
void duplicate_elements(int [], int);
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array's input\n");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]); 

    duplicate_elements(arr,size);
    return 0;
}

void duplicate_elements(int a[], int n)
{
    int min,k,temp;
    for(int i=0; i<n; i++)
    {
        min = a[i];
        temp = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                temp = j;
            }
        }
        k = a[i];
        a[i] = min;
        a[temp] = k;
        //printf("%d ",a[i]);
    }
    
    int i=0,j=1,dup=0;
    {
        while(i<n-1)
        {
            if(a[i] == a[j])
            {
                dup=dup+1;
                while(a[i] == a[j])
                {
                    j++;
                }
            }
            i=j;
            j=j+1;
        }
    }
    printf("Total duplicate element of the array is : %d",dup);
}
