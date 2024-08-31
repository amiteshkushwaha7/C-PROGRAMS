//Take Nothing Return Something
int add();
#include<stdio.h>
int main()
{
    int sum;
    sum=add();
    printf("Sum is %d",sum);
    return 0;
}
int add()
{
    int s,x,y;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    s=x+y;
    return s;
}