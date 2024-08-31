#include<stdio.h>
int main()
{
    int a,c,b=1;
    printf("Enter a Number");
    scanf("%d",&a);
    c=a&b;
    if(c==0){
        printf("It's a Even Number");
    }else if(c==1){
        printf("It's a Odd Number");
    }else{
        printf("Invalid Input");
    }
    return 0;
}