#include <stdio.h>
#include <math.h>
int main()
{
    int n, a, b, x, arm = 0, count = 0;
    printf("Enter a Number");
    scanf("%d", &n);
    a = n;
    if (n == 0)
    {
        printf("%d is not a Armstrong Number", n);
    }
    else
    {
        for (x = 10; (a / 10) >= 0 && a >= 1;)
        {
            a = a / x;
            count = count + 1;
        }
        b = n;
        for (x = 10; (b / 10) >= 0 && b >= 1;)
        {
            a = b % x;
            arm = arm + pow(a, count);
            b = b / x;
        }
        if (arm == n)
        {
            printf("%d is a Armstrong Number", n);
        }
        else
        {
            printf("%d is not a Armstrong Number", n);
        }
    }
    return 0;
}