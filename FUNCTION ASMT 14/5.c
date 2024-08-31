#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("Enter the total odd numbers terms\n");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{
    for(int i=1; i<=2*n; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}