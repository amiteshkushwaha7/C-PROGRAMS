#include<stdio.h>
int highest_mark(int **p, int n, int size[]);
void display_marks(int *p, int n);
void input(int **p, int n, int size[]);
int main()
{
    int i,hm,a[5], b[6], c[3], d[4], e[5];
    int *arr[5];
    int size[] = {5,6,3,4,5};
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;

    input(arr, 5, size);

    // for(i=0; i<5; i++)
    //     display_marks(arr[i], size[i]);

    hm = highest_mark(arr, 5, size);
    printf("\nHighest Mark among all classes is %d",hm);

    return 0;
}

void input(int **p, int n, int size[])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        printf("Enter %d Marks:\n",size[i]);
        for(j=0; j<size[i]; j++)
            scanf("%d", *(p+i)+j);
    }
}

void display_marks(int *p, int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",*(p+i));

    printf("\n");
}

int highest_mark(int **p, int n, int size[])
{
    int i,j,pvt;
    pvt = **p;

    for(i=0; i<n; i++)
    {
        for(j=0; j<size[i]; j++)
        {
            if(pvt < *(*(p+i)+j))
                pvt = *(*(p+i)+j);
        }
    }

    return pvt;
}