#include<stdio.h>
#include<stdlib.h>
void remove_duplicate_number(int n);
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    remove_duplicate_number(size);

    return 0;
}

void remove_duplicate_number(int n)
{
    int i,j,k,min,temp,*p;
    p = (int*)malloc(n*sizeof(int));

    printf("Enter %d numbers:\n",n);
    for(i=0; i<n; i++)
        scanf("%d",(p+i));

    for(i=0; i<n; i++)
    {
        min = *(p+i);
        temp = i;
        for(j=i+1; j<n; j++)
        {
            if(min == *(p+j))
            {
                *(p+j) = 0;
                temp = j;
            }

            k = *(p+n-i);
            *(p+n-i) = *(p+temp);
            *(p+temp) = k;
        }
    }
    //*(p+n-1) = 0;
     
    for(i=0; i<n; i++)
        printf("%d ",*(p+i));
}
