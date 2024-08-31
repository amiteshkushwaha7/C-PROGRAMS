#include<stdio.h>
int main()
{
    int t,n=1;
    printf("Enter a Number");
    scanf("%d",&t);
    while(n<=10){
        printf("%d\n",t*n);
        n++;
    }
    return 0;
}