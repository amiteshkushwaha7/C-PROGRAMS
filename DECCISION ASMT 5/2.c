#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number ");
    scanf("%d",&a);
    if(a%5==0){
        printf("%d is Divisible",a);
    }else{
        printf("%d is Not Divisible",a);
    }
    return 0;
}