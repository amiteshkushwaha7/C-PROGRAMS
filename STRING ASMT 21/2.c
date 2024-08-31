#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    int i,cnt = 0;

    for(i=0; str[i]; i++)
    {
        if(c == str[i])
            cnt++;
    }

    printf("Occurence of Charcter %c in the string = %d", c, cnt);

    return 0;
}