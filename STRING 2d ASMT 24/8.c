#include<stdio.h>
#include<string.h>
void check_anagram(char str[][100], int rows);
int main()
{
    int i,rows;
    printf("Enter Total Rows of Array:\n");
    scanf("%d",&rows);

    getchar();

    char str[rows][100];
    printf("ENter %d Strings:\n",rows);
    for(i=0; i<rows; i++)
    {
        fgets(str[i], 100, stdin);

        str[i][strlen(str[i])-1] = '\0';
    }

    check_anagram(str, rows);
    return 0;
}

void check_anagram(char str[][100], int rows)
{
    int l, l1, l2, i=0, j=1, k, flag;
    l1 = strlen(str[i])-1;
    l2 = strlen(str[j])-1;

    if(l1==l2)
    {
        for(k=0; str[i][k]; k++)
        {
            for(l=0; str[j][l]; l++)
            {
                flag = 0;
                if(str[i][k] == str[j][l])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
                break;
        }
    }

    if(flag == 1)
        printf("Given Strings are Anagram!");
    
    else
        printf("Given Strings are not Anagram!");

}