#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,pm=33;
    printf("Enter the Marks of Five Subject");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    if(m1>100 || m2>100 || m3>100 || m4>100 || m5>100){
        printf("Invalid");
    }
    else if(m1>pm && m2>pm && m3>pm && m4>pm && m5>pm){
        printf("Candidate is Passed");
    }else{
        printf("Candidate is Failed");
    }
    return 0;
}
