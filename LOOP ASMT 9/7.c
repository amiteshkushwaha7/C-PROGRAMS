#include<stdio.h>
int main()
{
    int n,count=0,x;
    printf("Enter a Number");
    scanf("%d",&n);
    for( ;n/10!=0 ; ){
        n=n/10;
        count=count+1;
    }
    count=count+1;
    printf("Total Digits in Number=%d",count);
    return 0;
}