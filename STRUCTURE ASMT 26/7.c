#include<stdio.h>
struct Time
{
    int HH;
    int MM;
    int SEC;
};

int input(struct Time a, int i)
{
    printf("\nEnter Time %d\n",i);

    printf("HH:");
    scanf("%d",&a.HH);

    printf("MM:");
    scanf("%d",&a.MM);

    printf("Sec:");
    scanf("%d",&a.SEC);

    if(a.SEC > 60)
    {
        a.MM = a.MM + (a.SEC / 60);
        a.SEC = (a.SEC % 60);
    }

    if(a.MM > 60)
    {
        a.HH = a.HH + (a.MM / 60);
        a.MM = (a.MM % 60);
    }

    if(a.HH > 12)
        a.HH = a.HH -12;

    
    return ((a.HH*60*60) + (a.MM*60) + (a.SEC));
}

int main()
{
    int x,y,z;
    struct Time a,b,time_diff;

    x = input(a, 1);
    y = input(b, 2);

    if(x>y)
        z = x-y;
    else
        z = y-x;


    time_diff.HH = z/360;
    z=z%360;

    time_diff.MM = z/60;
    z=z%60;

    time_diff.SEC = z;

    printf("\nDifference of these times:");
    printf("\nHH:MM:Sec");
    printf("\n%d:%d:%d",time_diff.HH, time_diff.MM, time_diff.SEC);

    return 0;
}
