#include<stdio.h>
void sort_array(int *p, int size);
int main()
{
    int i,size;
    printf("Enter the Size of Array:");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Array's Input:\n");

    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);


    sort_array(arr, size);
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
    
    return 0;
}

void sort_array(int *p, int size)
{
    int i,j,k,temp,min;
    for(i=0; i<size; i++)
    {
        min = *(p+i);
        temp = i;

        for(j=i; j<size; j++)
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
}