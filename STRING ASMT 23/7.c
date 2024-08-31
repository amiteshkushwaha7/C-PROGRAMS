#include <stdio.h>
#include <string.h>
int find_word(char *str, char *word);
int main()
{
    int size, a;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    getchar();

    char str[size], word[size];

    printf("Enter String:\n");
    fgets(str, size, stdin);
    str[strlen(str) - 1] = '\0';
    // printf("%s",str);

    printf("Enter the word: ");
    fgets(word, size, stdin);
    str[strlen(word) - 1] = '\0';
    // printf("\n%s",word);

    a = find_word(str, word);

    if (a == 1)
        printf("Given word is in string!");
    else
        printf("Given word is not in string!");
    return 0;
}

int find_word(char *str, char *word)
{
    int i=0, j;

    for (j=0; str[j]; j++)
    {
        if (word[i] == str[j])
        {
            while (word[i] == str[j])
            {
                i++;
                j++;

                if (str[j] == ' ')
                    return 1;
            }
            i=0;
        }
        else
        {
            while (str[j] != ' ')
                j++;
        }
    }

    return 0;
}