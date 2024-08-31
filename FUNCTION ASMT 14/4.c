#include<stdio.h>
void nutN(int);
int main()
{
    int n;
    printf("Enter total natural numbers terms\n");
    scanf("%d",&n);
    nutN(n);
    return 0;
}
void nutN(int n)
{
    for(int i=1; i<=n; i++){
        printf("%d\n",i);
    }
}