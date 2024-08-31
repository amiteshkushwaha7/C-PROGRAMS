#include<stdio.h>
int ncr(int, int);
int fact(int);
int main()
{
    int n,r,combn;
    printf("Enter the total number of items\n");
    scanf("%d",&n);
    printf("Enter the total selection type of the items\n");
    scanf("%d",&r);
    combn=ncr(n,r);
    printf("Total Combination=%d\n",combn);
    return 0;
}
int ncr(int x, int y)
{
    int a=fact(x);
    int b=fact(y);
    int c=fact(x-y);
    int k=(a)/(b*c);
    return k;
}

int fact(int a)
{
    int i,f=1;
    for(i=1; i<=a; i++){
        f= f*i;
    }
    return f;
}