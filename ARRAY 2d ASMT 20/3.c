#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Rows and Coloums of Matrix : ");
    scanf("%d %d", &r, &c);

    int i, j, k, A[r][c], transpose_matrix[c][r];
    printf("Enter Array Inputs:\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
            scanf("%d", &A[i][j]);
    }
    printf("\n");

    printf("Transported Matrix:\n");
    // if (r==c)                   //--->This is swapping logic if rows and coloum are same!
    // {
    //     for (i=0; i<=r-2; i++)
    //     {
    //         for (j=i; j<c; j++)
    //         {
    //             k = A[i][j];
    //             A[i][j] = A[j][i];
    //             A[j][i] = k;
    //         }
    //     }
    // }
    // else
    // {
        for (i=0; i<r; i++)          //---->This is the logic that is used is direct assin matrix A to result matrix!
        {
            for (j=0; j<c; j++)
            {
                transpose_matrix[j][i] = A[i][j];
                // printf("%d ",transpose_matrix);
            }
            // printf("\n");
        }
    //}

    for (i=0; i<c; i++)
    {
        for (j=0; j<r; j++)
        {
            printf("%d ", transpose_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}