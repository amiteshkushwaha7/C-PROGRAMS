#include<stdio.h>
#include<string.h>
void trim_spaces(char str[][100], int rows);
void case_insenstive(char str[][100], int rows);
void remove_duplicate_names(char str[][100], int rows);
int main()
{
    int i,rows;
    printf("Enter Total Rows:");
    scanf("%d",&rows);

    getchar();

    char str[rows][100];
    printf("Enter %d Cities Names:\n",rows);
    for(i=0; i<rows; i++)
    {
        fgets(str[i], 100, stdin);

        str[i][strlen(str[i]) -1] = '\0';
    }

    remove_duplicate_names(str, rows);
    for(i=0; i<rows; i++)
    {
        for(j=0; str[i][j]; j++)
        {
            printf("%c",str[i][j]);

        }
        printf(" ");
    }

    return 0;
}

void remove_duplicate_names(char str[][100], int rows)
{
    case_insenstive(str, rows);
    trim_spaces(str, rows);

    int i,j,k,result;
    char temp[100];
    for(i=0; i<rows-1; i++)
    {
        for(j=i+1; j<rows; j++)
        {
           result = strcmp(str[i], str[j]);
           if(result==0)
           {
                for(k=0; str[j][k]; k++)
                    str[j][k] = '\0';

                for(k=j; k<rows-1; k++)
                {
                    strcpy(temp, str[k]);
                    strcpy(str[k], str[k+1]);
                    strcpy(str[k+1], temp);
                }      
           }
        }
    }
}

void case_insenstive(char str[][100], int rows)
{
    int i,j;
    for(i=0; i<rows; i++)
    {
        for(j=0; str[i][j]; j++)
        {
            if(str[i][j] >= 'A' && str[i][j] <= 'Z')
                str[i][j] = str[i][j] + 32;
        }
    }
    // printf("\n");
    // for(i=0; i<rows; i++)
    //     printf("%s ",str[i]);
}

void trim_spaces(char str[][100], int rows)
{
    int i,j,k;
    char c;
    for(i=0; i<rows; i++)
    {
        for(j=0, k=0; str[i][j]; j++)
        {
            if(str[i][j] != ' ')
            {
                c = str[i][k];
                str[i][k] = str[i][j];
                str[i][j] = c;

                if(str[i][j] == '\0')
                    break;
                k++;
            }
        }
    }

    for(i=0; i<rows ; i++)
    {
        for(j=0; str[i][j]; j++)
        {
            if(str[i][j] == ' ')
                str[i][j] = '\0';
        }
    }
    // printf("\n");
    // for(i=0; i<rows; i++)
    //     printf("%s ",str[i]);
}