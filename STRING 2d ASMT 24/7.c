#include<stdio.h>
#include<string.h>
void sort_copy_str(char *copy_str);
void most_repeated_character(char str[][100], int rows);
int main()
{
    int i,rows;
    printf("Enter Total Rows of Array:\n");
    scanf("%d",&rows);

    getchar();

    char str[rows][100];
    printf("Enter %d Strings:\n", rows);
    for(i=0; i<rows; i++)
    {
        fgets(str[i], 100, stdin);

        str[i][strlen(str[i])-1] = '\0';
    }

    most_repeated_character(str, rows);

    return 0;
}

void most_repeated_character(char str[][100], int rows)
{
    int i,j,k=0,n;
    n=rows*100;

    char copy_str[n];
    for(i=0; i<100; i++)
        copy_str[i] = '\0';

    for(i=0; i<rows; i++)
    {
        for(j=0; str[i][j]; j++)
        {
            copy_str[k] = str[i][j];
            k++;
        }
    }
    
    // for(i=0; copy_str[i]; i++)
    //     printf("%c",copy_str[i]);

    sort_copy_str(copy_str);

    int cnt,frqncy=0;
    char c;

    for(i=0; copy_str[i]; i++)
    {
        cnt=1;
        for(j=i+1; copy_str[j] == copy_str[i]; j++)
        {
            cnt++;
        }

        if(frqncy < cnt)
        {
            frqncy = cnt;
            c = copy_str[i];
        }

        //printf("%c:%d   ",copy_str[j-1], cnt);
        i=j-1;
    }
    
    printf("\n%c is Most Repeated Character in Given List of Strings!", c, frqncy);
}

void sort_copy_str(char *copy_str)
{
    int i,j;
    char c;
    for(i=0; copy_str[i]; i++)
    {
        for(j=i+1; copy_str[j]; j++)
        {
            if(copy_str[i] == copy_str[j])
            {
                c = copy_str[i+1];
                copy_str[i+1] = copy_str[j];
                copy_str[j] = c;
            }
        }
    }
    // printf("\n");
    // printf("%s",copy_str);
}