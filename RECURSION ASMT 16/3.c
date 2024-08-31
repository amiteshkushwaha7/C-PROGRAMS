#include<stdio.h>
void odd_number(int);
int main()
{
    int n,y=1;
    printf("Enter total number\n");
    scanf("%d",&n);
    n=(n*2);
    odd_number(n);
    return 0;
}
void odd_number(int x)
{
    if(x>=1){
        if(x%2!=0){
            printf("%d\n",x);
        }
        odd_number(x-1);
    }
}