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
    int i,j,temp,result;
    char str[50] = {'\0'};

    for(i=0; i<size; i++)
    {
        //printf("%s\n",(p+i)->name);
        strcpy(str, (p+i)->name);
    
        // printf("%s\n",str);
        // printf("%s\n",(p+i)->name);

        temp = i;

        for(j=i+1; j<size; j++)
        {
            result = strcmp(str, (p+j)->name);
            if(result == 1 )
            {
                strcpy(str, (p+j)->name);
                temp = j;
            }
        }

        k = *(p+i);
        *(p+i) = *(p+temp);
        *(p+temp) = k;        
    }
}

struct Employee input(struct Employee x, int i)
{
    printf("\nEnter %d Employee Details:",i);

    printf("\nId:");
    scanf("%d",&x.id);

    getchar();
    printf("Name:");
    fgets(x.name, 50, stdin);
    x.name[strlen(x.name) -1 ] = '\0';

    printf("Salary:");
    scanf("%f",&x.salary);

    //printf("\n%d, %s, %0.2f", x.id,  x.name, x.salary);
    return x;
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

    printf("\nSorted(name based) Employee Details:");
    for(i=0; i<size; i++)
        printf("\nId>%d, Name>%s, Salary>%0.2f", emp[i].id, emp[i].name, emp[i].salary);

}