#include<stdio.h>
#include<string.h>
void find_emai_id(char str[][100], int rows);
int main()
{
    int i,rows;
    printf("Enter Total Rows:\n");
    scanf("%d",&rows);

    getchar();

    char str[rows][100];
    printf("Enter %d Email Id's:\n", rows);
    for(i=0; i<rows; i++)
    {
        fgets(str[i], 100, stdin);

        str[i][strlen(str[i])-1] = '\0';
    }

    find_emai_id(str, rows);

    return 0;
}

void find_emai_id(char str[][100], int rows)
{
    int i,j,k,l,cnt=0;

    char email_str[11] = "gmail.com";
    
    for(i=0; i<rows; i++)
    { 
        int flag = 1;
        k = strlen(email_str)-1;
        
        j = strlen(str[i])-1;

        while(k>=0)
        {
            if(str[i][j] != email_str[k])
            {
                flag = 0;
                break;
            }

            j--;
            k--;
        }
        
        if(flag == 1)
            cnt++;
    }
    printf("\n%d Emails End with gmail.com!", cnt);
}