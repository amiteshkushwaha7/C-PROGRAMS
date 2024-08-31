#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter a Number ");
    scanf("%d",&n);
    while(a<=n){
        printf("%d\n",a*a);
        a++;
    }
    return 0;
}