#include<stdio.h>
int digits_sum(int);
int main()
{
    int n,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
    sum=digits_sum(n);
    printf("%d\n",sum);
    return 0;
}
int digits_sum(int x)
{
    int s;
    if(x>0){
        s=(x%10)+digits_sum(x/10);
        return s;
    }
}