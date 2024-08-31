#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Number ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is Greater",a);
    }else if(b>a){
        printf("%d is Greater",b);
    }else{
        printf("%d",a);
    }
    return 0;   
}