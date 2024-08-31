#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Sides of a Trangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c || a+c>b || b+c>a){
        printf("Trangle is Valid");
    }else{
        printf("Trangle is Invalid");
    }
    return 0;
}