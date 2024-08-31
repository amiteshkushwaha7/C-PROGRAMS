#include<stdio.h>
#include<stdlib.h>
void sort_merge_array(int **s, int n);
void merge_array(int *p,int n1, int *q,int n2);
int main()
{
    int size1, size2;
    printf("Enter the size of 1st array:");
    scanf("%d",&size1);
    printf("Enter the size of 2nd array:");
    scanf("%d",&size2);

    int i,arr1[size1], arr2[size2];

    printf("\nEnter %d numbers of 1st array:\n",size1);
    for(i=0; i<size1; i++)
        scanf("%d",&arr1[i]);

    printf("\nEnter %d numbers of 2nd array:\n",size2);
    for(i=0; i<size2; i++)
        scanf("%d",&arr2[i]);

    merge_array(arr1,size1, arr2,size2);

    return 0;
}

void merge_array(int *p,int n1, int *q,int n2)
{
    int i,j,n,*r;
    n = n1 + n2;

    r = (int*)malloc(sizeof(int)*(n1+n2));

    for(i=0; i<n1; i++)
        *(r+i) = *(p+i);

    for(i,j=0; j<n2; i++,j++)
        *(r+i) = *(q+j);

    // for(i=0; i<n; i++)    //---->this for used for printing merge array;
    //     printf("%d ",*(r+i));
    
    sort_merge_array(&r,n);
    printf("\n");
    for(i=0; i<n; i++)
        printf("%d ",*(r+i));
}

void sort_merge_array(int **s, int n)
{
    int i,j,k,min,temp;
    for(i=0; i<n; i++)
    {
        min = *(*(s)+i);
        temp = i;

        for(j=i+1; j<n; j++)
        {
            if(min > *(*(s)+j))
            {
                min = *(*(s)+j);
                temp = j;
            }
        }

        k = *(*(s)+i);
        *(*(s)+i) = min;
        *(*(s)+temp) = k;
    }
}