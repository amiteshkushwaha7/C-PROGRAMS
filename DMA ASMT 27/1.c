#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input(int size);
int main()
{
    int length;
    printf("Enter the length of string:");
    scanf("%d",&length);

    input(length);

    return 0;
}

void input(int size)
{
    int i;
    char *p;
    p = (char*) malloc(sizeof(char)*size);

    printf("Enter String:\n");
        scanf("%s",p);

    printf("%s",p);
}