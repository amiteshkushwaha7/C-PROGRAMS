#include<stdio.h>
int main()
{
    int n=1,a=20;
    while(n<=10){
        if(a%2==0){
            printf("%d\n",a);
            n++;
        }
        a--;
    }
    return 0;
}