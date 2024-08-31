#include<stdio.h>
int main()
{
    printf("1. Factorial of a Number\n");
    printf("2. Check Even or Odd\n");
    printf("3. Area of Cricle\n");
    printf("4. Exit\n");
    int n,i,fact=1;
    float f;
    printf("Enter a Number\n");
    scanf("%d",&n);
    int x;
    printf("Enter Your Choice\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            for(i=1; i<=n; i++){
                fact=fact*i;
            }
            printf("%d",fact);
            break;
        case 2:
            if(n%2==0)
                printf("Given Number is Even");
            else
                printf("Given Number is Odd");
            break;
        case 3:
            f=3.14*n*n;
            printf("%f",f);
            break;
        default:
            printf("Exit");
        }
        return 0;
}