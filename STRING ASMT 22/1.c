#include<stdio.h>
#include<string.h>
int main()
{
    int size,length;
    printf("Enter Size of array: ");
    scanf("%d",&size);

    getchar(); //used for removing newline character from size!

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    
    str[strlen(str)-1] = '\0';
    length = strlen(str);
    printf("Length of the string = %d",length);

    return 0;
}
