#include<stdio.h>
#include<math.h>
void arm(int,int);
int main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    arm(n1,n2);
    return 0;
}
void arm(int a, int b)
{
    int x,x1,x2,d,n;
    (a<b) ? (x=a, n=b) : (x=b, n=a);
    x=x+1;
    while(x<n){
        int armn=0,count=0;
        x1=x;
        x2=x;
        while(x1>0){
            count=(count+1);
            x1=(x1/10);
        }
        while(x2>0){
            d = (x2%10);
            d = (pow(d,count));
            armn=(armn+d);
            x2=(x2/10);
        }
        if(armn==x){
            printf("%d\n",x);

        }
        x++;
    }
}
