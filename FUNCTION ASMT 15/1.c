#include<stdio.h>
int LCM(int, int);
int main()
{
    int n1,n2,a;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    n1>0 && n2>0 ? printf("LCM =%d", a=LCM(n1,n2)): printf("LCM = 0");
    return 0;
}
int LCM(int n1, int n2)
{
    int x,y;
    n2>n1? x=n2: x=n1;
    while(1){
        if(x%n1==0 && x%n2==0){
            y=x;
            return y; 
        }
        x++;
    }
}