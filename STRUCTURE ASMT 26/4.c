#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[50];
    float salary; 
};

int find_highest_salary_employee(struct Employee emp[], int size)
{
    int i,j,e;
    float max;

    max = emp[0].salary;
    e = 0;
    for(j=1; j<size; j++)
    {
        if(emp[j].salary > max)
        {
            max = emp[j].salary;
            e = j;
        }
    }

    return e+1;
}

void display(struct Employee y)
{
    printf("\n%d, %s, %0.2f",y.id, y.name, y.salary);
}

struct Employee input(struct Employee y, int i)
{
    printf("\nEnter %d Employee Details:",i);

    printf("\nId:");
    scanf("%d", &y.id);

    printf("Name:");
    getchar();
    fgets(y.name, 50, stdin);
    y.name[strlen(y.name) - 1] = '\0';
    
    printf("Salary:");
    scanf("%f",&y.salary);

    //printf("\n%d, %s, %0.2f", y.id,  y.name, y.salary);

    return y;
}

int main()
{
    int size, e;
    printf("Enter Total Empolyees:");
    scanf("%d", &size);

    struct Employee emp[size];

    int i,j;
    for(i=0; i<size; i++)
        emp[i] = input(emp[i],i+1);


    // printf("\nEmployees Details:\n");
    // for(i=0; i<size; i++)
    //     display(emp[i]);


    e = find_highest_salary_employee(emp, size);
    printf("\nEmployee-%d has highest salary!",e);
    
    return 0;
}