#include<stdio.h>
int fact(int);
int main()
{
    int n,fat;
    printf("Enter a number\n");
    scanf("%d",&n);
    fat=fact(n);
    printf("Factorial =%d",fat);
    return 0;
}
int fact(int n)
{
    int x=1;
    for(int i=1; i<=n; i++){
        x=x*i;
    }
    return x;
}