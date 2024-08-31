#include<stdio.h>
#include<string.h>
void swapping_character(char *swap_str, int indx1, int indx2);
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

    int index1, index2;
    printf("Enter swapping indecies: ");
    scanf("%d %d",&index1, &index2);

    swapping_character(str, index1, index2);

    printf("\n%s",str);
    
    return 0;
}

void swapping_character(char *swap_str, int indx1, int indx2)
{
    int i,k;
    for(i=0; swap_str[i]; i++)
    {
        if(i==indx1)
        {
            k = swap_str[i];
            swap_str[i] = swap_str[indx2];
            swap_str[indx2] = k;
            break;
        }
    }
    printf("%s",swap_str);
}