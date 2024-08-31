#include<stdio.h>
int main()
{
    int x,n1,n2,HCF=1;
    printf("Enter Two Number ");
    scanf("%d %d",&n1,&n2);
    if(n1==0 && n2==0){
        printf("HCF of %d and %d is Undefine",n1,n2); 
    }else{
        for(x=1; x<=n1 && x<=n2; x++){
            if((n1%x==0) && (n2%x==0)){
                HCF=x;
            }
        }
        printf("HCF of %d and %d is %d",n1,n2,HCF);
    }
    return 0;
}