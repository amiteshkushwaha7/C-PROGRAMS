#include<stdio.h>
#include<string.h>
int count_word(char *str);
int main()
{
    int size, cnt;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    str[strlen(str)-1] = '\0';

    cnt = count_word(str);
    printf("There are %d words in given string!",cnt);

    return 0;
}
 
int count_word(char *str)
{
    int i,j, cnt=0;
    for(i=0; str[i]; i++)
    {
        if((str[i] >='a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z'))
        {
            cnt=cnt+1;

            while(str[i]!= 32)
                i++;
        }
    }
    return cnt;
}