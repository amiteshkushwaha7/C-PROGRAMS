#include<stdio.h>
void even_num(int, int);
int main()
{
    int n,a=1;
    printf("Enter total number\n");
    scanf("%d",&n);
    n=(n*2);
    even_num(n,a);
    return 0;
}
void even_num(int x, int y)
{
    if(y<=x){
        if(x%2==0){
            printf("%d\n",x);
        }
        even_num(x-1, y);
    }
}