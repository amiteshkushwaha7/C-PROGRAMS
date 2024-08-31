#include<stdio.h>
#include<string.h>
void store_strings(char str[][100], int x);
int main()
{
    int i,rows;
    printf("Enter the Rows of array:");
    scanf("%d",&rows);

    getchar();

    char str[rows][100];

    store_strings(str, rows);

    printf("\nGiven Strings Store in 2d Array:\n");
    for(i=0; i<rows; i++)
        printf("%s\n",str[i]);

    return 0;
}

void store_strings(char str[][100], int rows)
{
    int i;
    printf("Enter %d Strings:\n", rows);
    for(i=0; i<rows; i++)
    {
        fgets(str[i], 100, stdin);

        str[i][strlen(str[i])-1] = '\0';
    }
}