#include<stdio.h>
int main()
{
    int n,a,x=1;
    printf("Enter a Number");
    scanf("%d",&n);
    a=n*2;
    while(x<=n){
        if(a%2!=0){
            printf("%d\n",a);
            x++;
        }
        a--;
    }
    return 0;
}