#include<stdio.h>
#include<string.h>
struct Student
{
    char name[50];
    int roll_number;
    char address[50];
};

void display(struct  Student x, int i)
{
    printf("\nStudent %d-> Name, Roll Number, Address:\n",i);
    printf("%s, %d, %s\n",x.name, x.roll_number, x.address);
}

struct Student input(struct Student x, int i)
{
    printf("\nEnter %d Student Details:",i);

    printf("\nName:");
    getchar();
    fgets(x.name, 50, stdin);
    x.name[strlen(x.name) - 1] = '\0';

    printf("Roll Number:");
    scanf("%d",&x.roll_number);

    getchar();
    printf("Address:");
    fgets(x.address, 50, stdin);
    x.address[strlen(x.address) - 1] = '\0';

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
        display(std[i], i+1);

    return 0;
}