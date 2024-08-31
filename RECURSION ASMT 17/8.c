#include<stdio.h>
void fib(int,int,int);
int main()
{
    int n,n1=-1,n2=1;
    printf("Enter the total terms of fibonacci series\n");
    scanf("%d",&n);
    fib(n,n1,n2);
    return 0;
}
void fib(int a, int x, int y)
{
    int c;
    if(a>=1){
        c=x+y;
        x=y;
        y=c;
        printf("%d\n",c);
        fib(a-1,x,y);
    }  
}