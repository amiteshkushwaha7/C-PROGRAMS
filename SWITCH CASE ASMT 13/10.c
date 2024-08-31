#include<stdio.h>
int main()
{
    printf("1. Calculate LCM of two numbers\n");
    printf("2. Calculate sum of the digits of a number\n");
    printf("3. Volume of a Cuboid\n");
    printf("4. Check whether a given number is Prime or not\n");
    printf("5. Exit\n");
    int x;
    printf("Enter Your Choice\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {   
            int n1,n2,a;
            printf("Enter two numbers\n");
            scanf("%d %d",&n1,&n2);
            (n1>n2)?(a=n1):(a=n2);
            {
                while(1){
                    if(a%n1==0 && a%n2==0)
                    {
                        printf("LCM =%d",a);
                        break;
                    }
                    a++;
                }
            }
            break;
        }

        case 2:
            {
            int n,d,sum=0;
            printf("Enter a number\n");
            scanf("%d",&n);
            while(n>0){
                d=n%10;
                sum=sum+d;
                n=n/10;
            }
            printf("Sum of digits is %d",sum);
            break;
        }

        case 3:
            {
            int a;
            printf("Enter the side of cubiod\n");
            scanf("%d",&a);
            printf("Volume of cubiod is %d",a*a*a);
            break;
        }

        case 4:
            {
            int i,n;
            printf("Enter a number\n");
            scanf("%d",&n);
            if(n==0 && n==1){
                printf("Given number is not Prime");
            }
            for(i=2; i<=n-1; i++){
                n%i==0;
            }
                if(i==n){
                    printf("Given number is Prime");
                }else{
                    printf("Given number is not Prime");
                }
            break;
        }

        default:
            printf("Exit");
    }
    return 0;
}