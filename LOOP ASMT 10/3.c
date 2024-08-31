#include<stdio.h>
int main()
{
    int n,a,z,x=1,y=0,fib;
    printf("Enter a Number\n");
    scanf("%d",&n);
    if(n==0 || n==1 ||n==2){
        printf("Given Number is in Fibonacci Series");
    }else if(n>=3){
        for(a=3; a<=n+5; a++){
            z=x+y;
            y=x; 
            x=z;
            fib=x;
            if(fib==n){
                printf("Given Number is in Fibonacci Series");
                break;
            }
        }
        if(fib!=n){
            printf("Given Number is not in Fibonacci Series");
        }
    }
    return 0;
}