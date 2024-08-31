#include<stdio.h>
#include<string.h>
void trim_str(char *str);
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    str[strlen(str)-1] = '\0';

    trim_str(str);

    return 0;
}

void trim_str(char *str)
{
    int i,j,flag=0;
    char k;
    for(i=0; str[i] == ' '; i++);
    j=i;

    for(i=0, j; str[j]; i++, j++)
    {
        k = str[i];
        str[i] = str[j];
        str[j] = k;
    }

    while(str[j-1] == ' ')
    {
        str[j-1] = '\0';
        j--;
    }

    for(i=0; str[i]; i++)
        printf("%c",str[i]);
}