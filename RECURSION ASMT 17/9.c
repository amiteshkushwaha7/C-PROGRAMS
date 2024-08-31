#include<stdio.h>
int digit_count(int);
int main()
{
    int n,count;
    printf("Enter a number\n");
    scanf("%d",&n);
    count=digit_count(n);
    printf("Total number of digits in this number is %d",count);
    return 0;
}
int digit_count(int x)
{
    int s=0;
    if(x>0){
        s=(s+1)+digit_count(x/10);
        return s;
    }
}