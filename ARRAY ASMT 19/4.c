#include<stdio.h>
void rotate_array(int [],int,int,int);
int main()
{
    int size,pos,dir;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("Enter the sifting position of the array : ");
    scanf("%d",&pos);
    printf("Enter the sifting direction(direction should be in digit like L=0/R=1) of the array : ");
    scanf("%d",&dir);
    int arr[size];
    printf("Enter array input\n");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    rotate_array(arr, size, pos, dir);
    return 0;
}
 
void rotate_array(int a[], int n, int p, int d)
{
    int i,j,pvt;
    if(d==0)
    {
        for(i=1; i<=p; i++)
        {
            pvt = a[0];
            for(j=0; j<n; j++)
            {
                if(j<(n-1))
                    a[j] = a[j+1];
                else
                    a[j] = pvt;
            }
        }
        for(i=0; i<n; i++)
            printf("%d ",a[i]);
    }
    else if(d==1)
    {
          for(i=1; i<=p; i++)
        {
            pvt = a[n-1];
            for(j=n-1; j>=0; j--)
            {
                if(j>0)
                    a[j] = a[j-1];
                else
                    a[j] = pvt;
            }
        }
        for(i=0; i<n; i++)
            printf("%d ",a[i]);
    }
    else
        printf("wrong direction input");
}