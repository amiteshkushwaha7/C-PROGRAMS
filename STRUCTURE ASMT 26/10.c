#include<stdio.h>
#include<string.h>
struct Student
{
    int roll_num;
    char name[50];
    int chem_marks;
    int math_marks;
    int phy_marks;
};

void calculate_percentage(struct Student x, int i)
{
    float per;
    per = (x.chem_marks + x.math_marks + x.phy_marks)/3.0;
    printf("Student%d-->%s get %0.2f%%\n",i, x.name, per);
}

struct Student input(struct Student x, int i)
{
    printf("\nEnter %d Student Details:",i);

    printf("\nRoll Number:");
    scanf("%d",&x.roll_num);

    getchar();
    printf("Name:");
    fgets(x.name, 50, stdin);
    x.name[strlen(x.name) -1 ] = '\0';

    printf("Chemistry Marks:");
    scanf("%d",&x.chem_marks);

    
    printf("Math Marks:");
    scanf("%d",&x.math_marks);

    
    printf("Physics Marks:");
    scanf("%d",&x.phy_marks);

    //printf("\n%d, %s, %d %d %d", x.roll_num,  x.name, x.chem_marks, x.math_marks, x.phy_marks);
    return x;
}

int main()
{
    int i,size;
    printf("Enter Total Students:");
    scanf("%d",&size);

    struct Student std[size];

    for(i=0; i<size; i++)
        std[i] = input(std[i], i+1);

    for(i=0; i<size; i++)
        calculate_percentage(std[i], i+1);
}