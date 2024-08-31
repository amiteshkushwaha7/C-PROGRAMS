#include<stdio.h>
#include<string.h>
int first_occurrence_character(char *character, char);
int main()
{
    int size, index;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    getchar();

    char str[size],c;
    printf("Enter String:\n");
    fgets(str, size, stdin);

    printf("Enter a character: ");
    scanf("%c",&c);

    str[strlen(str)-1] = '\0';

    index = first_occurrence_character(str, c);
    if(index == -1)
        printf("Given character is not in string");
    
    else
        printf("Given character avilavle at index %d in the string",index);

    return 0;
}

int first_occurrence_character(char *character, char x)
{
    int i;
    for(i=0; character[i]; i++)
    {
        if(character[i] == x)
            return i;        
    }
    if(character[i] == 0)
        return -1;
}