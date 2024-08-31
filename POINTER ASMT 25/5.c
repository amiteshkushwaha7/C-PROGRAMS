#include<stdio.h>
#include<string.h>
void get_trimed_word(char *p, int inc, int exc, char *q);
int main()
{
    int size, inc, exc;
    printf("Enter the size of array:");
    scanf("%d",&size);

    getchar();

    char str[size], word_str[100] = {'\0'};
    printf("\nEnter a string:\n");
    fgets(str, size, stdin);
    str[strlen(str)-1] = '\0';

    printf("\nEnter starting index of the word:");
    scanf("%d",&inc);
    
    printf("\nEnter ending index of the word:");
    scanf("%d",&exc);

    get_trimed_word(str, inc, exc, word_str);
    printf("\nThe word between given indices is:\n");
    printf("%s",word_str);

    return 0;
}

void get_trimed_word(char *p, int inc, int exc, char *q)
{
    int i,j;
    for(i=inc, j=0; i<exc; i++, j++)
    {
        *(q+j) = *(p+i);
    }

    // for(i=0; *(q+i); i++)
    //     printf("%c",*(q+i));
}