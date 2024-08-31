#include<stdio.h>
#include<string.h>
void store_words(char *str);
int main()
{
    int i,size;
    printf("Enter the Size of Array:\n");
    scanf("%d",&size);

    getchar();

    char str[size];
    printf("Enter Strings:\n");
    fgets(str, size, stdin);

    str[strlen(str)-1] = '\0';

    store_words(str);

    return 0;
}

void store_words(char *str)
{
    char store[100][100];

    int i,j,k,m, l=0, cnt=0;
    for(i=0; str[i]; i++)
    {
        if(str[i] != ' ')
        {
            j=i;
            while(str[j] != ' ')
            {
                if(str[j] == '\0' || str[j] =='_')
                    break;

                j++;
            }

            if(str[j-1]==':' || str[j-1]==';' || str[j-1]==',' || str[j-1]=='.' || str[j]=='!')
                j=j-1;

            if(str[j-1] == 's')
            {
                cnt++;
                for(k=i,m=0; str[k] != str[j]; k++,m++)
                {
                    store[l][m] = str[k];
                }
                l++;
            }
            i=j;
        }
    }

    for(i=0; i<cnt; i++)
        printf("%s\n",store[i]);       
}