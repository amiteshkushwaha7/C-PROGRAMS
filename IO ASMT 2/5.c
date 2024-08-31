#include<stdio.h>
int main()
{
    int CP,SP,X;
    printf("Enter the Value of CP and SP");
    scanf("%d %d",&CP,&SP);
    X=25*((SP-CP)/12);
    printf("Profit or Loss is %d",X);
    return 0;
}