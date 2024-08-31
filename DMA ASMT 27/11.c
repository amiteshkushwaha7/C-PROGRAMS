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

void display_student_team(struct Student_Team **s, int n)
{
    for (int i=0, j=1; i < n; i++) 
    {

        printf("\nTeam %d Details:\n", j);
        printf("Student %d Details:\n",i+1);
        printf("Name: %s\n", s[i]->std1.name);
        printf("Roll Number: %d\n", s[i]->std1.roll_num);
        printf("College Name: %s\n", s[i]->std1.college_name);

        printf("Student %d Details:\n",j+1);
        printf("Name: %s\n", s[i]->std2.name);
        printf("Roll Number: %d\n", s[i]->std2.roll_num);
        printf("College Name: %s\n", s[i]->std2.college_name);

        j=j+2;
    }
}

struct Student_Team** student_team_input(struct Student **p, int n)
{
    struct Student_Team **t = (struct Student_Team **)malloc((n / 2) * sizeof(struct Student_Team *));

    if (t == NULL)
        // Handle memory allocation failure
        return NULL;

    int i, j = 0; 
    for (i=0; i<n/2; i++)
    {
        t[i] = (struct Student_Team *)malloc(sizeof(struct Student_Team));

        strcpy(t[i]->std1.name, (p)[j]->name);
        t[i]->std1.roll_num = (p)[j]->roll_num;
        strcpy(t[i]->std1.college_name, (p)[j]->college_name);

        strcpy(t[i]->std2.name, (p)[j + 1]->name);
        t[i]->std2.roll_num = (p)[j + 1]->roll_num;
        strcpy(t[i]->std2.college_name, (p)[j + 1]->college_name);

        j = j + 2;
    }

    // for (i = 0; i < n/2; i++)
    // {
    //     printf("\nTeam %d Details:",i+1);

    //     printf("\nStudent %d Details in Team->",i+1);
    //     printf("\nName:%s, Roll Number:%d, College Name:%s\n", t[i]->std1.name, t[i]->std1.roll_num, t[i]->std1.college_name);

    //     printf("\nStudent %d Details in Team->",i+2);
    //     printf("\nName:%s, Roll Number:%d, College Name:%s\n", t[i]->std2.name, t[i]->std2.roll_num, t[i]->std2.college_name);
    //}

    return t;
}

void display_student(struct Student **q, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d Details:", i + 1);
        printf("\nName:%s", (*(q)[i]).name);
        printf("\nRoll Number:%d", (*(q)[i]).roll_num);
        printf("\nCollege Name:%s\n", (*(q)[i]).college_name);
    }
}

struct Student *student_input(char n[], int r, char cn[])
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
    struct Student_Team **team;

    char n[50];
    int r;
    char cn[100];

    getchar();
    for (i = 0; i < size; i++)
    {
        printf("\nEnter %d Student Details:\n", i + 1);

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

    //display_student(std, size);
    team = student_team_input(std, size);
    display_student_team(team, size/2);

    //Freeing memory
    for (i = 0; i < size / 2; i++) {
        free(team[i]);
    }
    free(team);

    for (i = 0; i < size; i++) {
        free(std[i]);
    }

    return 0;
}
