#include <stdio.h>
int main()
{
    int a, z, x;
    printf("Enter Two Numbers ");
    scanf("%d %d", &a, &z);
    if((a == 0 && z == 0) || (a == 1 && z == 1) || (a == 0 && z == 1) || (a == 1 && z == 0))
    {
        printf("There is no Prime Number between %d to %d", a, z);
    }
    if (z > a)
    {
        for (a; a <= z; a++)
        {
            for (x = 2; x <= (a - 1); x++)
            {
                if (a % x == 0)
                {
                    break;
                }
            }
            if (a == x)
            {
                printf("%d\n", a);
            }
        }
    }
    if (a > z)
    {
        for (a; a >= z; a--)
        {
            for (x = 2; x <= (a - 1); x++)
            {
                if (a % x == 0)
                {
                    break;
                }
            }
            if (a == x)
            {
                printf("%d\n", a);
            }
        }
    }
    if (a == z)
    {
        for (a = z; a == z; a++)
        {
            for (x = 2; x <= (a - 1); x++)
            {
                if (a % x == 0)
                {
                    printf("There is not Prime Number between %d and %d", a, z);
                    break;
                }
            }
            if (a == x)
            {
                printf("%d\n", a);
            }
        }
    }
   
    return 0;
}