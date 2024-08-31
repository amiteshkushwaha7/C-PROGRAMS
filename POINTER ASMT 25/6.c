#include<stdio.h>
#include<string.h>
void swap_strings(char *p,int size1, char *q,int size2);
int main()
{
    int size1, size2;
    printf("Enter the Size of 1'st Array:");
    scanf("%d", &size1);
    printf("Enter the Size of 2nd Array:");
    scanf("%d", &size2);

    getchar();

    char str1[size1], str2[size2];
    printf("\nEnter 1'st Array's String:\n");
    fgets(str1, size1, stdin);
    str1[strlen(str1) - 1] = '\0';

    printf("\nEnter 2nd Array's String:\n");
    fgets(str2, size2, stdin);
    str2[strlen(str2) - 1] = '\0';

    swap_strings(str1,size1, str2,size2);

    printf("\nAfter Swaping both Strings:");
    printf("\n1'st String:\n");
    printf("%s\n", str1);

    printf("\n2nd String:\n");
    printf("%s",str2);
  
    return 0;
}

void swap_strings(char *p,int size1, char *q,int size2)
{
    char str[100] = {'\0'};
    
    int i;
    for(i=0; i<(size1 + size2); i++)
    {
        str[i] = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) = str[i];
    }
}