#include<stdio.h>
int sqr(int);
int main()
{
    int n,sum;
    printf("Enter total numbers\n");
    scanf("%d",&n);
    sum=sqr(n);
    printf("%d\n",sum);
    return 0;
}
int sqr(int x)
{
    int s;
    if(x>=1){
        s=x*x+sqr(x-1);
        return s;
    }
}