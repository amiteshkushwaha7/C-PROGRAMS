#include<stdio.h>
#include<string.h>
void lowercase_string(char *lowercase_str);
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

    lowercase_string(str);

    return 0;
}

void lowercase_string(char *lowercase_str)
{
    int i;
    for(i=0; lowercase_str[i]; i++)
    {
        if((lowercase_str[i] >= 'A') && (lowercase_str[i] <= 'Z'))
            lowercase_str[i] = lowercase_str[i] + 32;
    }

    printf("%s",lowercase_str);
}