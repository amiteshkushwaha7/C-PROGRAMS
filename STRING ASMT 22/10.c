#include<stdio.h>
#include<string.h>
void alphanumeric(char *alphanum);
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

    alphanumeric(str);

    return 0;
}

void alphanumeric(char *alphanum)
{
    int i,flag=0;
    for(i=0; alphanum[i]; i++)
    {
        if(alphanum[i] >= 'a' && alphanum[i] <= 'z')
            flag = 1;

        else if((alphanum[i] >= 'A' && alphanum[i] <= 'Z'))
            flag = 1;

        else if(alphanum[i] >= '0' && alphanum[i] <= '9')
            flag = 1;

        else
        {
            flag = 0;
            break;
        }
    }
    if(flag==1)
        printf("Given string is an alphanumeric");

    else
        printf("Given string is not an alphanumeric");
}