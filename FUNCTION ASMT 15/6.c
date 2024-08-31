#include<stdio.h>
void prm(int,int);
int main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    prm(n1,n2);
    return 0;
}
void prm(int a, int b)
{
    int i,x,n;
    if(a==b){
        prinf("There is no Prime number between them");
    }
    (a<b)? (x=a,n=b) : (x=b,n=a);
    x=x+1;
    while(x<n){
        for(i=2; i<x; i++){
            if(x%i==0){
                break;
            }
        }
        if(i==x){
            printf("%d\n",x);
        }
        x++;
    }
}