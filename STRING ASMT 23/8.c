#include<stdio.h>
#include<string.h>
void capital_word(char *capital_str);
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

    capital_word(str);

    return 0;
}

void capital_word(char *capital_str)
{
    int i;
    for(i=0; capital_str[i]; i++)
    {
        if(capital_str[i] >='a' && capital_str[i] <='z')
        {
            capital_str[i] = capital_str[i] - 32;
            
            while(capital_str[i] != 32)
            {
                i++;
            }
        }
    }
    printf("%s",capital_str);
}
