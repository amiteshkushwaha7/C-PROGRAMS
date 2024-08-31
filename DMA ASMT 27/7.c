#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student
{
    char name[50];
    int roll_num;
    char college_name[100];
};

struct Student_Team
{
    struct Student std1;
    struct Student std2;
};

struct Student_Team* student_team_input(struct Student *p)
{
    struct Student_Team *t;
    t = (struct Student_Team*)malloc(sizeof(struct Student_Team));

    strcpy(t->std1.name, (p+0)->name);
    t->std1.roll_num = (p+0)->roll_num;
    strcpy(t->std1.college_name, (p+0)->college_name);
 
    strcpy(t->std2.name , (p+1)->name);
    t->std2.roll_num = (p+1)->roll_num;
    strcpy(t->std2.college_name , (p+1)->college_name);

    return t;
}

int main()
{
    struct Student_Team *team;
    struct Student std[2];

    int i;
    for (i=0; i<2; i++)
    {
        char n[50];
        int r;
        char cn[100];

        printf("\nEnter %d Student Details:\n", i + 1);

        printf("Name:");
        fgets(std[i].name, 50, stdin);
        std[i].name[strlen(std[i].name) - 1] = '\0';

        printf("Roll Number:");
        scanf("%d", &std[i].roll_num);

        printf("College Name:");
        getchar();
        fgets(std[i].college_name, 100, stdin);
        std[i].college_name[strlen(std[i].college_name) - 1] = '\0';
    }

    team = student_team_input(std);
    printf("\n%s %d %s",team->std1.name, team->std1.roll_num, team->std1.college_name);
    printf("\n%s %d %s",team->std2.name, team->std2.roll_num, team->std2.college_name);

    return 0;
}