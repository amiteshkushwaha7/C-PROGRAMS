#include<stdio.h>
#include<string.h>
void printf_character(char *character_str, int in1dx, int indx2);
int main()
{
    int size, index1, index2;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    str[strlen(str)-1] = '\0';
 
    printf("Enter inclusive index: ");
    scanf("%d",&index1);

    printf("Enter exclusive index: ");
    scanf("%d",&index2);

    printf_character(str, index1, index2);

    return 0;
}

void printf_character(char *character_str, int indx1, int indx2)
{
    int i;
    for(i=0; character_str[i]; i++)
    {
        if(i>=indx1 && i<=indx2)
            printf("%c",character_str[i]);
    }
}