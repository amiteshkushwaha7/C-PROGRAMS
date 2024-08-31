#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter a Number");
    scanf("%d",&n);
    if(n==1){
        printf("It's not a Prime Number");
    }
    if(n==0){
        printf("It's not Prime and not Composite");
    }
    for(x=2;x<=n;x++){
        if(x<n){
            if(n%x==0){
            printf("It's not a Prime Number");
            }
        }
        else if(x==n){
            printf("It's a Prime Number");  
       }
    }
    return 0;
}