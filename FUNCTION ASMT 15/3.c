#include<stdio.h>
int prm(int);
int main()
{
    int n,x;
    printf("Enter a number\n");
    scanf("%d",&n);
    x=prm(n);
    if(x==1){
        printf("Given number is Prime");
    }else{
        printf("Given number is not Prime");
    }
    return 0;
}
int prm(int a)
{
    int i;
    for(i=2; i<a; i++){
        if(a%i==0){
            return 0;
        }
    }
    if(i==a){
        return 1;
    }
}