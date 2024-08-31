#include<stdio.h>
int even_sum(int);
int main()
{
    int n,add;
    printf("Enter total numbers\n");
    scanf("%d",&n);
    n=(2*n);
    add=even_sum(n);
    printf("%d",add);
    return 0;
}
int even_sum(int x)
{
    int s;
    if(x>=1){
        if(x%2==0){
            s=x+even_sum(x-1);
            return s;
        }else{
            even_sum(x-1);
        }
    }
}