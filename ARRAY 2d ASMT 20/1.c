#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the order of both matrix : ");
    scanf("%d %d",&x,&y);
    int i,j, m1[x][y], m2[x][y], matrix_sum[x][y];
    printf("Enter 1st matrix inputs:\n");
    for(int i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
            scanf("%d",&m1[i][j]);
    }
    printf("\n");

    printf("Enter 2nd matrix inputs:\n");
    for(i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
            scanf("%d",&m2[i][j]);
    }
    printf("\n");

    printf("Sum of Matrix 1st and 2nd:\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            matrix_sum[i][j] = m1[i][j] + m2[i][j];
            printf("%d ",matrix_sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}