#include<stdio.h>
int main()
{
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    int x,y;
    printf("Enter Two Number\n");
    scanf("%d %d",&x,&y);
    int c;
    printf("Enter a Menu Number\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
           printf("Addition of %d and %d is %d",x,y,x+y);
           break;
        case 2:
           printf("Subtraction of %d and %d is %d",x,y,x-y);
           break;
        case 3:
           printf("Multiplication of %d and %d is %d",x,y,x*y);
           break;
        case 4:
           printf("Division of %d and %d is %d",x,y,x+y);
           break;
        default:
           printf("Exit");
    }
    return 0;
}