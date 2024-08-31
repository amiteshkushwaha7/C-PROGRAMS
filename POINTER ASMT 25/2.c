#include<stdio.h>
#include<string.h>
void find_occurence_indices(char c, char *p, int size, int []);
int main()
{
    int i,size, a[100] = {0};
    printf("Enter the size of array:");
    scanf("%d", &size);

    getchar();

    char c, str[size];
    printf("\nEnter a string:\n");
    fgets(str, size, stdin);
    str[strlen(str)-1] = '\0';

    printf("\nEnter a character:");
    scanf("%c",&c);

    find_occurence_indices(c, str, size, a);

    printf("\nOccurence of given character at index:\n");
    for(i=0; a[i]; i++)
        printf("%d ",a[i]);

    return 0;
}

void find_occurence_indices(char c, char *p, int size, int a[])
{
    int i,j=0;
    for(i=0; *(p+i); i++)
    {
        if(*(p+i) == c)
        {
            a[j] = i;
            j++;
        }
    }
}