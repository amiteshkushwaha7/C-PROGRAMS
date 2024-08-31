#include<stdio.h>
#include<string.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    getchar();
    
    char str[size], copy_str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    str[strlen(str)-1] = '\0';

    strcpy(copy_str, str);
    printf("%s",copy_str);

    return 0;
}