#include<stdio.h>
int odd_sum(int);
int main()
{
    int n,sum;
    printf("Enter total odd numbers\n");
    scanf("%d",&n);
    n=2*n;
    sum=odd_sum(n);
    printf("%d\n",sum);
    return 0;
}
int odd_sum(int x)
{
    int s;
    if(x>=1){
        if(x%2!=0){
            s=x+odd_sum(x-1);
            return s;
        }else{
            odd_sum(x-1);
        }
    }
}