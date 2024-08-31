#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter a Number ");
    scanf("%d",&a);
    if(((a/100)>0) && ((a/1000)==0)){
        printf("%d is a Three Digit Number",a);
    }else{
        printf("%d is not a Three Digit Number",a);
    }
    return 0;
}