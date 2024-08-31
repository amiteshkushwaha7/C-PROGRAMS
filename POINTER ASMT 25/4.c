#include<stdio.h>
#include<string.h>
void lower_case(char *p);
int main()
{
    int size;
    printf("Enter the size of array:\n");
    scanf("%d", &size);

    getchar();

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    lower_case(str);

    printf("%s", str);

    return 0;
}

void lower_case(char *p)
{
    int i;
    for(i=0; *(p+i); i++)
    {
        if(*(p+i) >= 'A' && *(p+i) <= 'Z')
            *(p+i) = *(p+i) + 32;
    }

    // for(i=0; *(p+i); i++)
    //     printf("%c", *(p+i));
}