#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter String:\n");
    fgets(str, 100, stdin);

    int i,cnt=0;
    for(i=0; str[i]; i++)
    {
        if(str[i] == ' ')
            cnt++;
    }

    printf("Total Spces in the String = %d",cnt);

    return 0;
}