#include<stdio.h>
int sum(int);
int main()
{
    int n,add;
    printf("Enter the total numbers\n");
    scanf("%d",&n);
    add=sum(n);
    printf("%d",add);
    return 0;
}
int sum(int x)
{
    int s;
    if(x>=1){
        s=x+sum(x-1);
        return s;
    }
}