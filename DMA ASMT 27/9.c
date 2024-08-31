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
    char n[50];
    int r;
    char cn[100];

    int i, size;
    printf("How many students details, you want to store:\n");
    scanf("%d", &size);
    struct Student *std[size];
    
    getchar();
    for(i=0; i<size; i++)
    {
        printf("\nEnter %d Student Details:\n",i+1);

        printf("Name:");
        fgets(n, 50, stdin);
        n[strlen(n) - 1] = '\0';

        printf("Roll Number:");
        scanf("%d", &r);

        printf("College Name:");
        getchar();
        fgets(cn, 100, stdin);
        cn[strlen(cn) - 1] = '\0';

        std[i] = input(n, r, cn);
    }

    for(i=0; i<size; i++)
    {
        printf("\nStudent %d Details:",i+1);
        printf("\nName:%s",std[i]->name);
        printf("\nRoll Number:%d",std[i]->roll_num);
        printf("\nCollege Name:%s\n",std[i]->college_name);
    }

    return 0;
}
