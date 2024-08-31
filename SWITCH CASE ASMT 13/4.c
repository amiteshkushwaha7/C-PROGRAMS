#include<stdio.h>
#include<math.h>
int main()
{
    printf("1.Check trangle is isosceles or not\n");
    printf("2.check trangle is right angle trangle or not\n");
    printf("3.check trangle is equilateral or not\n");
    printf("4.Exit\n");

    int m;
    printf("Enter your choice\n");
    scanf("%d",&m);

    int x,y,z;
    printf("Enter the lengths of Trangle\n");
    scanf("%d %d %d",&x,&y,&z);

    switch(m)
    {
        case 1:
        {
            if(x<(y+z) || y<(x+z) || z<(x+y))
            {
                printf("It's a Isosceles Trangle");
            }else{
                printf("It's not a Isosceles Trangle");
            }
            break;
        }
        case 2:
        {
            if(((x*x)==(y*y)+(z*z)) || ((y*y)==(x*x)+(z*z)) || ((z*z)==(y*y)+(x*x)))
            {
                printf("It's a Right angle Trangle");
            }else{
                printf("It's not a Right angle Trangle");
            }
            break;
        }
        case 3:
        {
            if(x==y && y==z)
            {
                printf("It's a Equilateral Trangle");
            }else{
                printf("It's not a Equilateral Trangle");
            }
            break;
        }
        default:
            printf("Exit");
    }
    return 0;
}