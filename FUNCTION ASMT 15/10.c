#include<stdio.h>
int sum(int);
int fact(int);
int main()
{
    int n,smt;
    printf("Enter total terms\n");
    scanf("%d",&n);
    smt=sum(n);
    printf("Total Sum of thr series = %d",smt);
    return 0;
}

int sum(int x)
{
    int a,i,s=0;
    for(i=1; i<=x; i++)
    {
        a=fact(i);
        s=s+a;
    }
    return s;
}

int fact(int f)
{
    int f1=1;
    for(int j=1; j<=f; j++)
    {
        f1=f1*j;
    }
    f=(f1/f);
    return f;
}