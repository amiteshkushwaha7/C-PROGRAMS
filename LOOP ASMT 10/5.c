#include<stdio.h>
int main()
{
    int x,n1,n2,HCF=0;
    printf("Enter Two Number ");
    scanf("%d %d",&n1,&n2);
    if(n1==0 || n2==0){
        printf("%d and %d is not Co-Prime",n1,n2); 
    }else if(n1==1 || n2==1){
        printf("%d and %d is Co-Prime",n1,n2);
    }else if(n1>=2 && n2>=2){
        for(x=2; x<=n1 && x<=n2; x++){
            if((n1%x==0) && (n2%x==0)){
                printf("%d and %d is not Co-Prime",n1,n2);
                break;
            }
        }
        if((n1%x!=0) && (n2%x!=0)){
            printf("%d and %d is Co-Prime",n1,n2);
        }
    }else 
    return 0;
}