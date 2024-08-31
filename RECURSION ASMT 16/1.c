#include<stdio.h>
void printN(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printN(n);
    return 0;
}
void printN(int x)
{
    if(x>0){
        printN(x-1);
        printf("%d\n",x);
    }
}