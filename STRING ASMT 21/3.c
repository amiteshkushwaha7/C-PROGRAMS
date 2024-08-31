#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter String:\n");
    fgets(str, 100, stdin);

    char Vowelstr[11] = "aeiouAEIOU";

    int i,j, cnt=0;
    for(i=0; str[i]; i++)
    {
        for(j=0; Vowelstr[j]; j++)
        {
            if(str[i] == Vowelstr[j])
                cnt++;
        }
    }

    printf("Total Vowels in the String = %d",cnt);

    return 0;
}
