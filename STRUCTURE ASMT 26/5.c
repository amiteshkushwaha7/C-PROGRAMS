#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};

void sort(struct Employee *p, int size)
{
    struct Employee k;

    int i,j,temp;
    float max;
    for(i=0; i<size; i++)
    {
        max = (p+i)->salary;
        temp = i;

        for(j=i+1; j<size; j++)
        {
            if(max < (p+j)->salary)
            {
                max = (p+j)->salary;
                temp = j;
            }
        }

        k = *(p+i);
        *(p+i) = *(p+temp);
        *(p+temp) = k;
    }
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
    int i,size;
    printf("Enter Total Employees:");
    scanf("%d",&size);
    struct Employee emp[size];

    for(i=0; i<size; i++)
        emp[i] = input(emp[i], i+1);

    sort(emp, size);

    printf("\nSorted(salary based) Employee Details:");
    for(i=0; i<size; i++)
        printf("\nId:%d, Name:%s, Salary:%0.2f", emp[i].id, emp[i].name, emp[i].salary);

    return 0;
}
