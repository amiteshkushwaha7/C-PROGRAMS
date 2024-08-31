#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student
{
    int roll_num;
    char name[50];
    char college_name[100];
};

struct Student_Team
{
    struct Student std1;
    struct Student std2;
};

void display_student_team(struct Student_Team *s)
{
    printf("\nTeam Details:");

    printf("\nStudent 1 Details in Team->");
    printf("\nName:%s, Roll Number:%d, College Name:%s\n",s->std1.name, s->std1.roll_num, s->std1.college_name);

    printf("\nStudent 2 Details in Team->");
    printf("\nName:%s, Roll Number:%d, College Name:%s",s->std2.name, s->std2.roll_num, s->std2.college_name);
}

struct Student_Team* student_team_input(struct Student **p)
{
    struct Student_Team *t;
    t = (struct Student_Team*)malloc(sizeof(struct Student_Team));

    strcpy(t->std1.name, (p)[0]->name);
    t->std1.roll_num = (p)[0]->roll_num;
    strcpy(t->std1.college_name, (p)[0]->college_name);
   
 
    strcpy(t->std2.name , (p)[1]->name);
    t->std2.roll_num = (p)[1]->roll_num;
    strcpy(t->std2.college_name , (p)[1]->college_name);

    // printf("\n%s %d %s",t->std1.name, t->std1.roll_num, t->std1.college_name);
    // printf("\n%s %d %s",t->std2.name, t->std2.roll_num, t->std2.college_name);

    return t;
}

void display_student(struct Student **q, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nStudent %d Details:",i+1);
        printf("\nName:%s",(*(q)[i]).name);
        printf("\nRoll Number:%d",(*(q)[i]).roll_num);
        printf("\nCollege Name:%s\n",(*(q)[i]).college_name);
    }
}

struct Student* student_input(char n[], int r, char cn[])
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
    int i, size;
    printf("How many students details, you want to store:");
    scanf("%d", &size);

    struct Student *std[size];
    struct Student_Team *team;

    char n[50];
    int r;
    char cn[100];
    
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

        std[i] = student_input(n, r, cn);
    }

    display_student(std, size);
    team = student_team_input(std);
    display_student_team(team);
     
    return 0;
}
