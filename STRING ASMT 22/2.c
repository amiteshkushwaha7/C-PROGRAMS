#include<stdio.h>
#include<string.h>
void reverse_string(char* reverse_str);
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

    reverse_string(str);

    return 0;
}

void reverse_string(char* reverse_str)
{
    int i,j, length;
    char k;
    length = (strlen(reverse_str)) - 1;

    for(i=0; i<length/2; i++)
    {
       k = reverse_str[i];
       reverse_str[i] = reverse_str[length-i];
       reverse_str[length-i] = k;
    }
    printf("%s",reverse_str);
}