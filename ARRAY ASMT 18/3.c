#include<stdio.h>
int main()
{
    int a[10],even_sum=0,odd_sum=0,i;
    printf("Enter 10 numbers\n");
    for(i=0; i<=9; i++)
        scanf("%d",&a[i]);
    for(i=0; i<=9; i++)
    {
        if(a[i]%2==0)
            even_sum=even_sum+a[i];
        else
            odd_sum=odd_sum+a[i];
    }
    printf("Total Sum of all Even numbers = %d\n",even_sum);
    printf("Total Sum of all Odd numbers = %d",odd_sum);
    return 0;
}