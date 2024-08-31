#include<stdio.h>
void dec_oct(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    dec_oct(n);
    return 0;
}
void dec_oct(int x)
{
    int r;
    if(x<8){
        r=x;
    }else{
        r=x%8;
        dec_oct(x/8);
    }
    printf("%d",r);
}