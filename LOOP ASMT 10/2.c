#include<stdio.h>
int main()
{
    int n,a,z,x=1,y=0,fib=0;
    printf("Enter the Number of Terms of Fibonacci series ");
    scanf("%d",&n);
    if(n==1){
        printf("%dst Term of Fibonacci series %d",n,fib);
    }else if(n==2){
        printf("First %d Term of Fibonacci series is %d and %d",n,y,x);
    }else if(n>=3){
        printf("First %d Term of Fibonacci series is \n%d\n%d\n",n,y,x);
        for(a=3; a<=n; a++){
            z=x+y;
            y=x;
            x=z;
            fib=x;
            printf("%d\n",fib);
        }
    }
    return 0;
}