#include<stdio.h>
void prmf(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    prmf(n);
    return 0;

}
void prmf(int n)
{ 
    int i=2;
    while(n>=1){
        if(n%i==0){
            printf("%d\n",i);
            n=n/i;
            if(n==1){
                break;
            }
        }else if(n%i!=0){
            i++;
        }
   }
}