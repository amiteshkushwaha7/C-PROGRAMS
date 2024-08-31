#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter String:\n");
    fgets(str, 100, stdin);

    int i;
    for(i=0; str[i]; i++);
    
    printf("\nReverse of the String:");
    while(i>=0)
    {
        printf("%c",str[i]);
        i--;
    }

    return 0;
}