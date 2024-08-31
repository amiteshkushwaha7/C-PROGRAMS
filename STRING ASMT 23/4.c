#include<stdio.h>
#include<string.h>
void trim_spaces(char *str);
void reverse_str(char *str, int size);
int main()
{
    int size,length;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("ENter String:\n");
    fgets(str, size, stdin);
    str[strlen(str)-1] = '\0';

    reverse_str(str, size);

    printf("%s",str);

    return 0;
}

void reverse_str(char *str, int size)
{
    trim_spaces(str);

    int i,j,k=0,l,length;
    
    length = strlen(str)-1;
    if(str[length]==' ')
    {
        for(i=length; str[i]==' '; i--)
            str[i] = '\0';
    }
    
    length = strlen(str)-1;
     
    char copy_word[size];

    for(i=length; i>=0; i--)
    {
        for(j=i; str[j-1]!=' '; j--)
        {
            if(j==0)
                break;
        }
        l=j;

        for(k=k; l<=i ;k++, l++)
            copy_word[k] = str[l];

        if(str[j-1]==' ')
        {
            copy_word[k] = ' ';
            k++;
        }    
        i=j-1;
    }

    for(i=0; i<=size; i++)
    {
        str[i] = '\0';
        str[i] = copy_word[i];
    }
}

void trim_spaces(char *str)
{
    int i,k,pvt,length;

    for(k=0; str[k]==' '; k++)
        str[k] = '\0';

    for(i=0,k; str[k]; i++, k++)
    {
        pvt=str[i];
        str[i] = str[k];
        str[k] = pvt;
    }

    length = strlen(str)-1;
    for(i=length; str[i]==' '; i--)
        str[i] = '\0';
}