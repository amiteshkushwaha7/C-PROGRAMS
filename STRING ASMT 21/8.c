#include<stdio.h>
int main()
{
    char i,str[100];
    printf("Enter String:\n");
    fgets(str, 100, stdin);

    for(i=0; str[i]; i++);
    str[i-1] = '\0';

    int alpha=0, digit=0, spcl=0;
    for(i=0; str[i]; i++)
    {
        if(('a'<= str[i]) && (str[i] <='z') || ('A'<= str[i]) && (str[i] <= 'z'))
            alpha++;

        else if(('0' <= str[i]) && (str[i] <= '9'))
            digit++;

        else
            spcl++;
    }

    printf("Total Alphabates in the String = %d\n",alpha);
    printf("Total Digits in the String = %d\n",digit);
    printf("Total Special Character in the String = %d\n",spcl);

    return 0;
}