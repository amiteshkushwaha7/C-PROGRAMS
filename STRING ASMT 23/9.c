#include<stdio.h>
#include<string.h>
void lower_case_str(char *str);
void acronym_name(char *str, int size);
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

    acronym_name(str, size);

    printf("\n%s",str);

    return 0;
}

void acronym_name(char *str, int size)
{
    lower_case_str(str);
     
    char acronym_str[size]; //--->created for copying str values!

    int i,j=0,k;
    for(i=0; i<=size; i++)
    {
        while(str[j] ==' ')
            j++;

        acronym_str[i] = str[j];

        if(str[j+1]==' ')
        {
            i++;
            acronym_str[i] = ' ';
        }
        j++;
        
        if(str[j]=='\0')
        {
            k=i+1;
            break;
        }
    }
    while(k<=size)
    {
        acronym_str[k]='\0';
        k++;
    }

    for(i=0; i<=size; i++)
    {
        str[i] = '\0';
        str[i] = acronym_str[i];
    }
}

void lower_case_str(char *str)
{
    int i,length;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i]+32;
    }
    printf("\n%s\n",str);

    length = strlen(str);

    i=length-1;
    while(str[i]==' ')
    {
        str[i] = '\0';
        i--;
    }

    for(i; str[i-1]!=' '; i--);

    for(i; i>=0; i--)
    {     
        if(str[i]!=' ' && i==0)
        {
            str[i] = str[i] - 32;
            break;
        }

        else if(str[i]!=' ' && str[i-1]==' ')
            str[i] = str[i] - 32;

        else if(str[i]!=' ' && str[i-1]!=' ')
        {
            while(str[i-1]!=' ')
            {
                str[i] = ' ';
                i--;
                if(i==0)
                {
                    str[i] = str[i] - 32;
                    break;
                } 
            }
            if(i != 0)
                str[i] = str[i] - 32;
        }
    }
    printf("\n%s",str);
}