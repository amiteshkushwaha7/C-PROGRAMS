#include <stdio.h>
int main()
{
    int x1, x2, y1, y2;
    printf("Enter the order of Matrices A : ");
    scanf("%d %d", &x1, &x2);
    printf("Enter the order of Matrices B : ");
    scanf("%d %d", &y1, &y2);
    printf("\n");

    if (x2 == y1)
    {
        int i, j, k, A[x1][x2], B[y1][y2], product_matrix[x1][y2], product = 0;
        printf("Enter Matrix A inputs\n");
        for (i=0; i<x1; i++)
        {
            for (j=0; j<x2; j++)
                scanf("%d", &A[i][j]);
        }
        printf("\n");

        printf("Enter Matrix B inputs\n");
        for (i=0; i<y1; i++)
        {
            for (j=0; j<y2; j++)
                scanf("%d", &B[i][j]);
        }

        printf("\n");
        for (i=0; i<x1; i++)
        {
            k=0;
            while (k<y2)
            {
                for (j=0; j<x2; j++)
                {
                    product = product + (A[i][j] * B[j][k]);
                }
                printf("%d ", product);
                product = 0;
                k++;
            }
            printf("\n");
        }
    }
    else
        printf("Invalid Matrix Order");
    return 0;
}
