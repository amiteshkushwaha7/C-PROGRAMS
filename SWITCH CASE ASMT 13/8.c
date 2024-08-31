#include<stdio.h>
int main()
{
    char c;
    printf("Enter a Character\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'a' ... 'z':
            printf("Character is in Lowercase Alphabate");
            break;
        case 'A' ... 'Z':
            printf("Character is in Uppercase Alphabate");
            break;
        default:
            printf("Given Character is a special character");
            break;
    }
    return 0;
}