#include<stdio.h>
int HCF(int,int,int);
int main()
{
    int n1,n2,h,a;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    if((n1==0 && n2>0) || (n2==0 && n1>0)){
        printf("HCF = 1");
    }else if(n1==0 && n2==0){
        printf("HCF can not define");
    }else{
        n2>n1? (a=n1): (a=n2);
        h=HCF(n1,n2,a);
        printf("HCF of given number is %d",h);
    }
    return 0;
}
int HCF(int x, int y, int d)
{
    if(x%d==0 && y%d==0){
        return d;
    }
    HCF(x,y,d-1);
}