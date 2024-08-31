#include<stdio.h>
int main()
{
    char str[100],copyStr[100];
    int i;
    printf("Enter String:\n");
    fgets(str, 100, stdin);

    for(i=0; str[i]; i++);
    str[i-1] = '\0';

    for(i=0; str[i]; i++)
        copyStr[i] = str[i];

    copyStr[i-1] = '\0';
    
    printf("%s",copyStr);

    return 0;
}