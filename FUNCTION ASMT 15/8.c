#include<stdio.h>
void PASCAL(int r);
int ncr(int,int);
int fact(int);
int main()
{
    int n;
    printf("Enter the length of tringle\n");
    scanf("%d",&n);
    PASCAL(n);
    return 0;
}

void PASCAL(int r)
{
    int i,j,comb;
    for(i=0; i<r; i++){
        for(j=0; j<=3-i; j++){
            printf(" ");
        }
        int k=0;
        for(j=0; j<=i; j++){
                if(j%2==0){
                    comb=ncr(i,k);
                    printf("%d",comb);
                    k++;
                }else{
                    printf(" ");

                }
        }
        for(j=j-1; j>=1; j--){
            if(j%2!=0){
                comb=ncr(i,k);
                printf("%d",comb);
                k++;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int ncr(int x, int y)
{
    int a,b,c,k;
    a=fact(x);
    b=fact(y);
    c=fact(x-y);
    k=(a)/(b*c);
    return k;
}

int fact(int f1)
{
    int i,f=1;
    for(i=1; i<=f1; i++){
        f=f*i;
    }
    return f;
}