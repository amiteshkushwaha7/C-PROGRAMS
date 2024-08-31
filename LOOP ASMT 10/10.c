#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a;
    printf("%d\n",0);
    for(i=1; i<=1000; i++){
            int count = 0;
            int arm = 0;
            for(j=i; j>=1; ){
                j=j/10;
                count=count+1;
            }
            for(j=i; j>=1;){
                a=j%10;
                arm=arm+pow(a,count);
                j=j/10;
            }
            if(arm==i){
                printf("%d\n",i);
            }
        }
    return 0;
}