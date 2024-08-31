#include<stdio.h>
int main()
{
    int n,fib=0,a,x,y,z;
    printf("Enter the nth term of Fibonacci Series ");
    scanf("%d",&n);
    y=0;
    x=1;
    if(n==1){
        printf("1st term of Fibonacci series is %d",y);
    }else if(n==2){
        printf("2nd term of Fibonacci series if %d",x);
    }else if(n>=3){
        for(a=3; a<=n; a++){
            z=x+y;
            y=x;
            x=z;  
            fib=x;
        }
        printf("%dth term of Fibonacci series is %d",n,fib);
    }
    
    return 0;
}