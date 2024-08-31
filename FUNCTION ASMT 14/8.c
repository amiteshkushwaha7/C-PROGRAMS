#include<stdio.h>
int npr(int,int);
int fact(int);
int main()
{
    int n,r,purt;
    printf("Enter the total number of items\n");
    scanf("%d",&n);
    printf("Enter the total selecting types\n");
    scanf("%d",&r);
    n>r? printf("Total Arrengement =%d",purt=npr(n,r)) : printf("Total number of items must be great than selection type");
    return 0;
}

int npr(int x, int y)
{
    int a=fact(x);
    int b=fact(x-y);
    int c=(a/b);
    return c;
}

int fact(int k)
{
    int i,f=1;
    for(i=1; i<=k; i++){
        f=(f*i);
    }
    return f;
}