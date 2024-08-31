#include<stdio.h>
int comb(int,int);
int main()
{
    int n,r,combn;
    printf("Enter the total number of Items\n");
    scanf("%d",&n);
    printf("Enter the total type for selecting a item\n");
    scanf("%d",&r);
    n>r? printf("Total commbination =%d\n",combn=comb(n,r)) : printf("Number of Items must be greater than items's selection type");
    return 0;
}
int comb(int n, int r)
{
    int nr=(n-r), fact_n=1, fact_r=1, fact_nr=1,k;
    for(int i=1; i<=n; i++){
        fact_n=fact_n*i;
    }

    for(int i=1; i<=r; i++){
        fact_r = fact_r*i;
    }
    
    for(int i=1; i<=nr; i++){
        fact_nr= fact_nr*i;
    }
    
    k= (fact_n)/(fact_r * fact_nr);
    return k;
}