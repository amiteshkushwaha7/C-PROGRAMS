#include<stdio.h>
#include<string.h>
void concatenate_strings(char *str1, char *str2, int size);
int main()
{
    int size1, size2, size;
    printf("Enter the size of 1st array: ");
    scanf("%d",&size1);
    printf("Enter the size of 2nd array: ");
    scanf("%d",&size2);

    getchar();
    size = size1+size2;

    char str1[size1], str2[size2];

    printf("Enter 1st Array's String:\n");
    fgets(str1, size1, stdin);
    printf("Enter 2nd Array's String:\n");
    fgets(str2, size2, stdin);

    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';

    concatenate_strings(str1, str2, size);

    return 0;
}

void concatenate_strings(char *str1, char *str2, int size)
{
    int i,j;
    char concatenate_str[size];

    for(i=0; str1[i]; i++)
        concatenate_str[i] = str1[i];

    j=i;
    for(i=0; str2[i]; i++,j++)
        concatenate_str[j] = str2[i];

    for(j; j<=size; j++)
        concatenate_str[j] = '\0';

    for(i=0; concatenate_str[i]; i++)
        printf("%c",concatenate_str[i]);
}