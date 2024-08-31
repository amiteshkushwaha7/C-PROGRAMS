#include<stdio.h>
int main()
{
    int i=0;
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='0' || c=='u' || c=='A' || c=='E' || c=='O' || c=='U' || c=='I')
    {
        i=1;
    }
    else if((c>='b' && c<='z') || (c>='B' && c<='Z') && (c!='a' || c!='e' || c!='i' || c!='0' || c!='u' || c!='A' || c!='E' || c!='O' || c!='U' || c!='I') )
    {
        i=2;
    }
    switch(i)
    {
        case 1:
            printf("Given character is Vowel");
            break;
        case 2:
            printf("Given character is Consonant");
            break;
        default:
            printf("Given character is a special character");
    }
    return 0;
}
