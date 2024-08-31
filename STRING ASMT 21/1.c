#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter the size of string array: ");
    scanf("%d",&size);

    getchar();  
    //---> scanf jb size le rha to ek newline character dede rha hai..
    //aur fir uske baad hm fgets use kr rhe to vo newline ko read kr le rha hai aur 
    //aur age kecode chl rhe hain ..isisliye 
    //getchar() ..ye uss newline ko apne andr samahit kr leta hai

    char str[size];
    printf("Enter a String: ");
    fgets(str, size, stdin);

    int i;
    for(i=0; str[i]; i++);
    str[i-1] = '\0';

    for(i=0; str[i]; i++);
    printf("Length of the String = %d",i);

    return 0;
} 