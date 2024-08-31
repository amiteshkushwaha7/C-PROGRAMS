#include<stdio.h>
int main()
{
    int a,x,y,z,w;
    float m;
    char ch;
    double d;
    x=sizeof(a);
    y=sizeof(m);
    z=sizeof(ch);
    w=sizeof(d);
    printf("int=%d byte float=%d byte char=%d byte double=%d byte",x,y,z,w);
    return 0;

}