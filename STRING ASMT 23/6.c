#include<stdio.h>
#include<string.h>
void sort_array(char *str);
void count_frequency(char *str);
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

    count_frequency(str);

    return 0;
}

void count_frequency(char *str)
{
    sort_array(str);

    int i,j,temp, cnt=1;

    printf("\nString's Characters Frequency:\n");
    for(i=0; str[i]; i++)
    {
        temp=i;
        for(j=i+1; str[j]; j++)
        {
            if(str[i] == str[j])
            {
                cnt=cnt+1;
                temp=j;
            }
        }
        if(str[i] == ' ')
            printf("Space%c:%d\n",str[i], cnt);
        else
            printf("%c:%d\n",str[i], cnt);

        i=temp;
        cnt=1;
    }
}

void sort_array(char *str)

{
    int i,j,k,inc=1;

    for(i=0; str[i]; i++)
    {
        for(j=i+1; str[j]; j++)
        {
            if(str[i] == str[j])
            {
                k = str[i+inc];
                str[i+inc] = str[j];
                str[j] = k;
                inc++;
            }
        }
        inc=1;
    }
}