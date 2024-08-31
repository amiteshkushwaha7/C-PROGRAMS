#include<stdio.h>
void fib(int, int, int);
int main()
{
    int n1=0, n2=1, n;
    printf("Enter the total terms of fibonacci series\n");
    scanf("%d",&n);
    fib(n1,n2,n);
    return 0;
}
void fib(int a, int b, int k)
{
    int count=2,c;
    printf("%d\n",a);
    printf("%d\n",b);
    while(count<k){
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
        count=count+1;
    }
}