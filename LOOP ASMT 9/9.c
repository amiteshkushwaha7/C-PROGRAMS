#include<stdio.h>
int main()
{
    int n1,n2,x;
    printf("Enter Two Number ");
    scanf("%d %d",&n1,&n2);
    n1>n2?x=n1:x=n2;
    for( ; ; ){
        if(x%n1==0 && x%n2==0){
           printf("LCM = %d ",x);
           break;
        }
        x++;
    }
    return 0;
}