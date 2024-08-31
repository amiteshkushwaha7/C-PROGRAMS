#include<stdio.h>
void odd_num(int, int);
int main()
{
    int n,a=1;
    printf("Enter total number\n");
    scanf("%d",&n);
    n=(n*2);
    odd_num(n,a);
}
void odd_num(int x, int y)
{
    if(y<=x){
        if(y%2!=0){
            printf("%d\n",y);
        }
        odd_num(x, y+1);
    }
}