#include<stdio.h>
int main()
{
    int n,x=1,a=1;
    printf("Enter a Number");
    scanf("%d",&n);
    while(x<=n){
        if(a%2==0){
            printf("%d\n",a);
            x++;
        }
        a++;
    }
    return 0;
}