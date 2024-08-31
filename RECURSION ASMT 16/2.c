#include<stdio.h>
void reverse_num(int,int);
int main()
{
    int n,a=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    reverse_num(n,a);
    return 0;
}
void reverse_num(int x, int y)
{
    if(y<=x){
        reverse_num(x,y+1);
        printf("%d\n",y);
    }
}