#include<stdio.h>
#include<string.h>
void count_vowel_string(char *count_vowel);
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    str[strlen(str)-1] = '\0';

    count_vowel_string(str);    

    return 0;
}

void count_vowel_string(char *count_vowel)
{
    int i,j,cnt=0;
    char vowel[11] = "aeiouAEIOU";
    for(i=0; count_vowel[i]; i++)
    {
        for(j=0; vowel[j]; j++)
        {
            if(count_vowel[i] == vowel[j])
                cnt++;
        }
    }
    printf("Total vowel in the String = %d",cnt);
}