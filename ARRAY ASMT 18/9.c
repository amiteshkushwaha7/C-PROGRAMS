#include<stdio.h> 
int main()
{
    int a[10],i,j,pvt,temp,p;
    printf("Enter 10 numbers\n");
    for(i=0; i<=9; i++)
        scanf("%d",&a[i]);
    for(i=0; i<=9; i++)
    {
        pvt=a[i];
        temp = i;
        for(j=i+1; j<=9; j++)
        {
            if(pvt < a[j])
            {
                pvt = a[j];
                temp = j;
            }
        }
        p = a[i];
        a[i] = pvt;
        a[temp] = p;
        printf("%d ",a[i]);
    }
    return 0;
}