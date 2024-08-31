#include<stdio.h>
#include<string.h>
void palindrome_str(char *str, int size);
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

    palindrome_str(str, size);

    return 0;
}

void palindrome_str(char *str, int size)
{
    int i,length, flag=1;
    char k,copy_str[size];

    strcpy(copy_str, str); //-->copy str in copy_str

    length = (strlen(copy_str)) -1;

    for(i=0; i<length/2; i++)
    {
        k = copy_str[i];
        copy_str[i] = copy_str[length-i];
        copy_str[length-i] = k;
    }
    printf("%s",copy_str);

    for(i=0; i<=length; i++)
    {
        if(str[i] != copy_str[i])
        {
            printf("\nGiven String is not Palindrome!");
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("\nGiven String is a Palindrome!");
}