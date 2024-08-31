#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number of the Month ");
    scanf("%d",&a);
    if(12>=a && a>=1){
        if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
        printf("The Total Days of This Month is 31");
        }else if(a==4 || a==6 || a==9 || a==11){
        printf("The Total Days of This Month is 30");  
        }
        }else if(a==2){
        printf("The Total Days of This Month is 28/29");
        }else{
        printf("Invalid Input");
    }
    return 0;
}