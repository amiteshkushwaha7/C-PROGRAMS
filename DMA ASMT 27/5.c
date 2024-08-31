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
    struct Student m1, m2;
};
