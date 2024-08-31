#include<stdio.h>
#include<string.h>
void case_senstive(char *str);
int case_insenstive_comparision(char *str1, char *str2);
int main()
{
    int size1, size2, result;
    printf("Enter the size of 1st array: ");
    scanf("%d",&size1);
    printf("Enter the size of 2nd array: ");
    scanf("%d",&size2);

    getchar();

    char str1[size1], str2[size2];
    printf("Enter 1st String Input:\n");
    fgets(str1, size1, stdin);
    str1[strlen(str1)-1] = '\0';

    printf("Enter 2nd String Input:\n");
    fgets(str2, size2, stdin);
    str2[strlen(str2)-1] = '\0';

    result = case_insenstive_comparision(str1, str2);

    if(result==1)
        printf("Given Strings are Equal!");
    
    else if(result==0)
        printf("Given Strings are not Equal!");
    
    else
        printf("Strings have different sizes");

    return 0;
}

int case_insenstive_comparision(char *str1, char *str2)
{
    int i;
    case_senstive(str1);
    case_senstive(str2);
    for(i=0; str1[i] && str2[i]; i++)
    {
        if(str1[i] != str2[i])
            return 0;      
    }
    
    if(str1[i]==str2[i])
        return 1;
    else
        return -1;
}

void case_senstive(char *str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i] <='Z')
            str[i] = str[i] + 32;
    }
}