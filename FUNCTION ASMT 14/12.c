//Take Something Return Nothing
#include<stdio.h>
void add(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    int sum=add(x,y);
    printf("Sum is %d",sum);
    return 0;
}
void add(int x, int y)
{
    int c;
    c=x+y;
    return c;
}