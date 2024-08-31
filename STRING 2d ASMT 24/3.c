#include<stdio.h>
#include<string.h>
void case_insenstive(char city[][100], int rows);
void sort_city(char city[][100], int rows);
int main()
{
    int i,rows;
    printf("Enter Total Rows:");
    scanf("%d",&rows);

    getchar();

    char city[rows][100];
    printf("Enter %d Cities Names:\n",rows);
    for(i=0; i<rows; i++)
    {
        fgets(city[i], 100, stdin);

        city[i][strlen(city[i]) -1] = '\0';
    }

    sort_city(city, rows);

    return 0;
}

void sort_city(char city[][100], int rows)
{
    case_insenstive(city, rows);

    char temp[100] = {'\0'};

    int i,j,result;
    for(i=0; i<rows; i++)
    {
        for(j=i+1; j<rows; j++)
        {
           result = strcmp(city[i], city[j]);
           if(result == 1)
           {
                strcpy(temp, city[i]);
                strcpy(city[i], city[j]);
                strcpy(city[j], temp);
           }
        }
    }
    
    printf("\n");
    for(i=0; i<rows; i++)
        printf("%s\n",city[i]);

}

void case_insenstive(char city[][100], int rows)
{
    int i,j;
    for(i=0; i<rows; i++)
    {
        for(j=0; city[i][j]; j++)
        {
            if(city[i][j] >= 'A' && city[i][j] <= 'Z')
                city[i][j] = city[i][j] + 32;
        }
    }
    // printf("\n");
    // for(i=0; i<rows; i++)
    //     printf("%s\n",city[i]);
}