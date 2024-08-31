#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter a Number");
    scanf("%d",&n);
    while(a<=n){
        printf("%d\n",n);
        n--;
    }
    return 0;
}