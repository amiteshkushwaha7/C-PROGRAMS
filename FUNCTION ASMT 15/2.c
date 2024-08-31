#include<stdio.h>
int HCF(int, int);
int main()
{
    int n,n1,n2;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    if((n1==0 && n2>0) || (n2==0 && n1>0)){
        printf("HCF = 1");
    }else{
        n1==0 && n2==0? printf("HCF is undefine"): printf("HCF = %d",n=HCF(n1,n2));
    }
    return 0;
}
int HCF(int a, int b)
{
    int x,k;
    (a<b)? (x=a): (x=b);
    for( ; x>=1; x--){
        if(a%x==0 && b%x==0){
            k=x;
            return k;
        }
    }
}