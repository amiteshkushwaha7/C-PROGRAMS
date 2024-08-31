#include<stdio.h>
void adj_occr(int [], int);
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    adj_occr(arr, size);
    return 0;
}
void adj_occr(int a[], int n)
{
    int i,j;
    printf("Enter array's numbers :\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        if(a[i] == a[i+1])
        {
            printf("The first occurence of adjacent duplicate values is : %d",a[i]);
            break;
        }
    }
    if(a[i] != a[i+1])
        printf("There is no occurence of adjacent duplicate values");
}