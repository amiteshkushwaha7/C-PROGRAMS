#include<stdio.h>
int prm(int);
int main()
{
    int n,x;
    printf("Enter a number\n");
    scanf("%d",&n);
    x=prm(n);
    printf("Next Prime Number is %d",x);
    return 0;
}
int prm(int a)
{
    int i;
    a=a+1;
    for(i=2; i<a; i++){
        if(a%i==0){
            a++; 
            i=1;
        }
    }
    if(a==i){
        return a;
    }
}