#include<stdio.h>
#include<string.h>
void uppercase_string(char *uppercase_str);
int main()
{
    int size;
    printf("Enter the size of string: ");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    str[strlen(str)-1] = '\0';

    uppercase_string(str);

    return 0;
}

void uppercase_string(char *uppercase_str)
{
    int i;
    for(i=0; uppercase_str[i]; i++)
    {
        if((uppercase_str[i] >= 'a') && (uppercase_str[i] <= 'z'))
            uppercase_str[i] = uppercase_str[i] - 32;
    }

    printf("%s",uppercase_str);
}