#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter Three Numbers");
    scanf("%d %d %d",&a,&b,&c);
    D=((b*b)-(4*a*c));
    if(D<0){
        printf("Root is Imaginary");
    }else if(D>0){
        printf("Root is Real and Distinct");
    }else{
        printf("Root is Equal and Real");
    }
    return 0;
    
}