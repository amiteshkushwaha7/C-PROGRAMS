#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Day Number of a Week\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
          printf("Monday is the first day of week");
          break;
         case 2:
          printf("Tuesday is the second day of week");
          break;
         case 3:
          printf("Wednesday is the third day of week");
          break;
         case 4:
          printf("Thrusday is the fourth day of week");
          break;
         case 5:
          printf("Friday is the fifth day of week");
          break;
         case 6:
          printf("Saturday is the sixth day of week");
          break;
        case 7:
          printf("Sunday is the seventh day of week");
          break;
        dafult:
          printf("Wrong Input");
    
    }
    return 0;
}