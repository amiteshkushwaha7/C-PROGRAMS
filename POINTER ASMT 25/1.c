#include<stdio.h>
void swap_numbers(int *p, int *q);
int main()
{
    int a,b;
    printf("Enter a's value:\n");
    scanf("%d",&a);
    printf("Enter b's value:\n");
    scanf("%d",&b);

    swap_numbers(&a, &b);

    printf("\nAfter Swapping these Numbers!\n");
    printf("a = %d, b = %d",a,b);

    return 0;
}

void swap_numbers(int *p, int *q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}