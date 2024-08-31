#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is Greates Number",a);
    }else if(b>c && b>a){
        printf("%d is Greatest Number",b);
    }else{
        printf("%d is Greatest Number",c);
    }
    return 0;
}