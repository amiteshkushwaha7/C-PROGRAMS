#include<stdio.h>
int main()
{
    int n,rN;
    printf("Enter a Three Digits Number ");
    scanf("%d",&n);
    rN=(n%10)*10;
    n=n/10;
    rN=(rN+n%10)*10;
    n=n/10;
    rN=rN+n;
    printf("Rotated Number=%d",rN);
    return 0;

}