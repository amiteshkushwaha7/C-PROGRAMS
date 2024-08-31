#include<stdio.h>
int main()
{
    char a;
    int x;
    printf("Enter a Character");
    scanf("%c",&a);
    x=sizeof(a);
    printf("%d",x);
    return 0;
}