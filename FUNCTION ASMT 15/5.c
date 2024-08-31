#include<stdio.h>
void prm(int,int);
int main()
{
    int t,n=2;
    printf("Enter the total Prime Numbers\n");
    scanf("%d",&t);
    prm(t,n);
    return 0;
}
void prm(int a, int b)
{
    int i,count=0;
    while(count<a){
        for(i=2; i<b; i++){
            if(b%i==0){
                b++;
                i=1;
            }
        }
        if(i==b){
            printf("%d\n",b);
            count=count+1;
            b++;
            i=1;
        }
    }
}