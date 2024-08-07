//Salary Classification
#include<stdio.h>
int main()
{
    float salary,rem,rem1,remain;
    printf("Enter Your Salary: ");
    scanf("%f",&salary);
    rem=(salary*10/100);
    printf("Amount Of premium=%f",rem);
    rem1=(salary*10/100);
    printf("\nAmount Of loan: %f",rem1);
    remain=salary-rem-rem1;
    printf("\nRemmainning Salary: %f",remain);


}