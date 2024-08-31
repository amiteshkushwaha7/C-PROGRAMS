#include<stdio.h>
#include<string.h>
void upper_case_conversion(char *p);
int main()
{
    int size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    str[strlen(str) - 1] = '\0';

    upper_case_conversion(str);

    printf("%s", str);

    return 0;
}

void upper_case_conversion(char *p)
{
    int i;
    for(i=0; *(p+i); i++)
    {
        if(*(p+i) >= 'a' && *(p+i) <= 'z')
            *(p+i) = *(p+i) - 32;
    }
}                                       