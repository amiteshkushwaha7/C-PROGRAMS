#include<stdio.h>
int rvrs_num(int,int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    n=rvrs_num(n,0);
    printf("%d",n);
    return 0;
}
int rvrs_num(int x, int a)
{
    if(x>0)
    {
        a=(a*10)+(x%10);
        a=a+rvrs_num(x/10,a);
    }
    else
        return a;
}