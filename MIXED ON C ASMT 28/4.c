#include<stdio.h>
#include<windows.h>
int main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    if(stime.wHour > 12)
        stime.wHour = stime.wHour - 12;
    printf("Current System Time is--> %d:%d:%d", stime.wHour, stime.wMinute, stime.wSecond);
    return 0;   
}