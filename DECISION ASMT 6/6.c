#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    if(a%7==0 || a%3==0){
        printf("Number is Divisible by 7 or 3");
    }else{
        printf("Number is not Divisible by 7 or 3");
    }
    return 0;
}