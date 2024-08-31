#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter String:\n");
    fgets(str, 100, stdin);

    for(i=0; str[i]; i++)
    {
        if((str[i] >= 'a') && (str[i] <= 'z'))
            str[i] = str[i]-32;
    }

    for(i=0; str[i]; i++)
        printf("%c",str[i]);

    return 0;
}
