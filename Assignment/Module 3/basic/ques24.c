//Average Salary & Total Salary
#include<stdio.h>
int main()
{
    char name1,name2,name3,name4,name5;
    float salary1,salary2,salary3,salary4,salary5,totsalary,avgsalary;

    printf("Enter Name: ");
    scanf("%C",&name1);
    printf("Enter Salary: ");
    scanf("%f",&salary1);

    printf("Enter Name: ");
    scanf("%C",&name2);
    printf("\nEnter Salary: ");
    scanf("%f",&salary2);

    printf("Enter Name: ");
    scanf("%C",&name3);
    printf("\nEnter Salary: ");
    scanf("%f",&salary3);

    printf("Enter Name: ");
    scanf("%C",&name4);
    printf("\nEnter Salary: ");
    scanf("%f",&salary4);

    printf("Enter Name: ");
    scanf("%C",&name5);
    printf("\nEnter Salary: ");
    scanf("%f",&salary5);

    totsalary=salary1+salary2+salary3+salary4+salary5;
    printf("Total Salary=%f",totsalary);

    avgsalary=(salary1+salary2+salary3+salary4+salary5)/5;
    printf("\nAverage Salary=%f",avgsalary);





}