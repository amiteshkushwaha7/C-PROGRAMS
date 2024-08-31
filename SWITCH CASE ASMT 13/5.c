#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf("invalid");
    }
    return 0;
}