#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is Positive",a);
    }else{
        printf("%d is Non-Postive",a);
    }
    return 0;
}