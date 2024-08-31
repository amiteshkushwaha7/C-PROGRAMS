#include <stdio.h>
#include <string.h>
void store_str(char *str);
int main()
{
    int size;
    printf("Enter the Size of Array:\n");
    scanf("%d", &size);

    getchar();

    char str[size];
    printf("Enter String:\n");
    fgets(str, size, stdin);

    str[strlen(str) - 1] = '\0';

    store_str(str);

    return 0;
}

void store_str(char *str)
{
    char copy_str[100][100];
    int i,j=0,k=0,cnt=0;

    for(i=0; str[i]; i++)
    {
        if(str[i] == 'a')
        {
            cnt++;
            k=0;
            while(str[i] != ' ')
            {
                if(str[i] == '\0' || str[i] == '_')
                    break;
                
                if(str[i]==':' || str[i]==';' || str[i]==',' || str[i]=='.' || str[i]=='!')
                    break;

                copy_str[j][k] = str[i];
                k++;
                i++;
            }
            j++;
        }
        else
        {
            while(str[i] != ' ')
            {
                if(str[i+1] == '\0')
                    break;

                i++;
            }
        }
    }

    for(i=0; i<cnt; i++)
        printf("%s\n",copy_str[i]);
}