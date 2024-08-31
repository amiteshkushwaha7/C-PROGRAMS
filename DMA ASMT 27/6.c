#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student
{
    int roll_num;
    char name[50];
    char college_name[100];
};

struct Student *input(char n[], int r, char cn[])
{
    struct Student *p;
    p = (struct Student *)malloc(sizeof(struct Student));

    strcpy(p->name, n);
    p->roll_num = r;
    strcpy(p->college_name, cn);

    return p;
}

int main()
{
    struct Student *std;
    char n[50];
    int r;
    char cn[100];

    printf("\nEnter Student Details:\n");

    printf("Name:");
    fgets(n, 50, stdin);
    n[strlen(n) - 1] = '\0';

    printf("Roll Number:");
    scanf("%d", &r);

    printf("College Name:");
    getchar();
    fgets(cn, 100, stdin);
    cn[strlen(cn) - 1] = '\0';

    std = input(n, r, cn);

    return 0;
}
