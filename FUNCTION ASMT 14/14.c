//Take Something Return Something
int add(int,int);
#include<stdio.h>
int main()
{
    int sum,x,y;
    printf("Enter two Numbers\n");
    scanf("%d %d",&x,&y);
    sum=add(x,y);
    printf("Sum is %d",sum);
    return 0;
}
int add(int x, int y)
{
    int s;
    s=x+y;
    return s;
}