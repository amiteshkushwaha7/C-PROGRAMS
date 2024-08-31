#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number ");
    scanf("%d",&a);
    if(a%2==0 && a%3==0){
        printf("Number is Divisible by 2 and 3");
    }else{
        printf("Numbe is not Divisible by 2 or 3");
    }
    return 0;
}