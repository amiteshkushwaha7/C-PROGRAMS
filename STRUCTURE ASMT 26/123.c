#include<stdio.h>
#include<string.h>
struct Employee
{
    int employee_id;
    char employee_name[50];
    float employee_salary;
};

void display(struct Employee x)
{
    printf("\nId: %d",x.employee_id);
    printf("\nName: %s",x.employee_name);
    printf("\nSalary: %0.2f",x.employee_salary);
}

struct Employee input(struct Employee x)
{
    printf("Enter Employee Id:\n");
    scanf("%d",&x.employee_id);

    getchar();
    printf("Enter Employee Name:\n");
    fgets(x.employee_name, 50, stdin);
    x.employee_name[strlen(x.employee_name) - 1] = '\0';

    printf("Enter Employee Salary:\n");
    scanf("%f",&x.employee_salary);
    
    return x;
}

int main()
{
    struct Employee y;
    y = input(y);

    printf("\nEmployee Details:");
    display(y);
    
    return 0;
}
