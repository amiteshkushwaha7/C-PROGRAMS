#include<stdio.h>
void bin_dec(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    bin_dec(n);
    return 0;
}
void bin_dec(int x)
{
    int r;
    if(x>=1){
        r=x%2;
        bin_dec(x/2);
        printf("%d",r);
    }
}