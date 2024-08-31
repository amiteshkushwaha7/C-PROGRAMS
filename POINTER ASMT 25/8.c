#include<stdio.h>
void merge_array(int *p, int size1, int *q, int size2, int *arr, int size);
int main()
{
    int i,size1, size2, size;

    printf("Enter the Size of 1'st Array:");
    scanf("%d", &size1);
    printf("Enter the Size of 2nd Array:");
    scanf("%d", &size2);

    size = (size1 + size2);

    int arr1[size1], arr2[size2], arr[size];

    printf("\nEnter 1'st Array's Inputs:\n");
    for(i=0; i<size1; i++)
        scanf("%d", &arr1[i]);
        
    printf("\nEnter 2nd Array's Inputs:\n");
    for(i=0; i<size2; i++)
        scanf("%d", &arr2[i]);

    merge_array(arr1,size1, arr2,size2, arr,size);

    printf("\nAfter Merging both Array:\n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void merge_array(int *p, int size1, int *q, int size2, int *arr, int size)
{
    int i,j=0;
    for(i=0; i<size; i++)
    {
        if(i<size1)
            arr[i] = *(p+i);
        
        else
        {
            arr[i] = *(q+j);
            j++;
        }
    }
}