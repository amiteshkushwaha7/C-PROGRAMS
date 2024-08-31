#include<stdio.h>
#include<string.h>
int word_count(char *str);
void store_words(char *str);
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("Enter Array's Input:\n");
    fgets(str, size, stdin);

    str[strlen(str)-1] = '\0';

    store_words(str);

    return 0;
}

void store_words(char *str)
{
    int i=0, j, k, rows;
    rows = word_count(str);

    char copy_word[rows][100];

    for(j=0; i<rows && str[j]; j++)
    {
        k=0;
        if(str[j] != ' ')
        {
            while(str[j]!=' ')
            {
                if(str[j]=='\0')
                    break;

                copy_word[i][k] = str[j];
                k++;
                j++;
            }
            copy_word[i][k] = '\0';
            i++;
        }
    }



    printf("\nConverted Array Input in 2d Array:\n");
    for(i=0; i<rows; i++)
        printf("%s\n", copy_word[i]);
}

int word_count(char *str)
{
    int i,cnt=0;
    for(i=0; str[i]; i++)
    {    
        if(str[i] !=' ')
        {
            cnt = cnt + 1;
            while(str[i]!=' ')
            {
                if(str[i]=='\0')
                    break;

                i++;
            }
        }
    }
    //printf("%d",cnt);
    return cnt;
}