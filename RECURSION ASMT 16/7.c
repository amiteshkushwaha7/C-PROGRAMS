#include<stdio.h>
void sqr(int,int);
int main()
{
    int n,a=1;
    printf("Enter total number\n");
    scanf("%d",&n);
    sqr(n,a);
    return 0;
}
void sqr(int x, int y)
{
    if(y<=x){
        sqr(x-1, y);
        printf("%d\n",x*x);
    }
}