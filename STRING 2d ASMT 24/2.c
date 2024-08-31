#include<stdio.h>
#include<string.h>
void find_Vowels(char str[][100], int rows);
int main()
{
    int i,rows;
    printf("Enter the Rows of the Array:\n");
    scanf("%d",&rows);

    getchar();

    char str[rows][100];
    printf("Enter %d Strings:\n",rows);
    for(i=0; i<rows; i++)
    {
        fgets(str[i], 100, stdin);

        str[i][strlen(str[i])-1] = '\0';
    }

    find_Vowels(str, rows);

    return 0;
}

void find_Vowels(char str[][100], int rows)
{
    int i,j,k;
    char Vowels[11] = "aeiouAEIOU";

    printf("\nVowels in each Strings:\n");
    for(i=0; i<rows; i++)
    {
        int cnt=0;
        for(j=0; str[i][j]; j++)
        {
            for(k=0; Vowels[k]; k++)sda
            {
                if(str[i][j] == Vowels[k])
                    cnt++;
            }
        }
        printf("%d: %d Vowels\n",i+1,cnt);
    }
}