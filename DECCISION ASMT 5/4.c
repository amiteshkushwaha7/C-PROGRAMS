#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a Number ");
    scanf("%d",&a);
    b=a/2;
    if(a==2*b){
       printf("%d is an Even Number",a);
    }else{
        printf("%d is a Odd Number",a);
    }
    return 0;
}