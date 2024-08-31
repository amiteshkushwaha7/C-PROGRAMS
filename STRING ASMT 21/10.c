#include<stdio.h>
int main()
{
    char str[100], c;
    int i;
    printf("Enter String:\n");
    fgets(str, 100, stdin);
 
    printf("Enter a character: ");
    scanf("%c",&c);

    for(i=0; str[i]; i++)
    {
        if(c == str[i])
        {
            printf("%c Occurred at index %d in the String",c,i);
            break;
        }
    }
    if(str[i] == 0)
        printf("Given character is not in the String!");
    
    return 0;
}