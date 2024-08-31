#include<stdio.h>
int f1(int,int);
int main()
{
    int n,y;
    printf("Enter a Number\n");
    scanf("%d",&n);
    int x;
    printf("Enter a digit\n");
    scanf("%d",&x);
    y=f1(n,x);
    y==1? printf("Given digit is in number") : printf("Given digit is not in the number");
    return 0;
}
    int f1(int n, int x)
{
    int a;
    while(n>0){
        a=n%10;
        if(a==x){
            return 1;
        }
        n=n/10;
    }
    return 0;
    }
