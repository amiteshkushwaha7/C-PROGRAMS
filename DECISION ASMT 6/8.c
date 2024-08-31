#include<stdio.h>
int main()
{
    char ch;
    int a,z,A,Z;
    printf("Enter a Character");
    scanf("%c",&ch);
    a='a';
    z='z';
    A='A';
    Z='Z';
    if(ch>=a && ch<=z){
        printf("Alphabate is in Lower Case");
    }else if(ch>=A && ch<=Z){
        printf("Alphabate is in Upper Case");
    }else{
        printf("It's a Digit or a Special Character");
    }
    return 0;
}