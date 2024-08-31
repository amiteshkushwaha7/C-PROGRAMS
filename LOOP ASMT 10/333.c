#include<stdio.h>
int main()
{
    int t,n,a,z,x=1,y=0,fib;
    printf("Enter the total Number of Terms of Fibonacci series\n");
    scanf("%d",&t);
    printf("Enter a Number\n");
    scanf("%d",&n);
    if(t==1 || t==2){
        if(n==0){
            printf("Given Number is in Fibonacci Series");
        }else if(n==1){
            printf("Given Number is in Fibonacci Series");
        }else{
            printf("Given Number is not in Fibonacci Series");
        }
    }
    if(t>=3){
        for(a=3; a<=t; a++){
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