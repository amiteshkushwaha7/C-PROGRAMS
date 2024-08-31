//Take Nothing Return Nothing
#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}