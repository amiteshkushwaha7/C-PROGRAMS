#include<stdio.h>
int Power(int,int,int);
int main()
{
    int n,p,res;
    printf("Enter a number and the power of the number\n");
    scanf("%d %d",&n,&p);
    res=Power(n,p,1);
    printf("%d",res);
    return 0;
}
int Power(int x, int y, int z)
{
    int a;
    if(y==1)
        return x;
    a=x*Power(x,y-1,z=1);
    return a;
}
