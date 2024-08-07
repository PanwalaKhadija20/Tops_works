//Insurance
#include<stdio.h>
int main()
{
    int salary,insurance_prem;

    printf("Enter Salary: ");
    scanf("%d",&salary);
    insurance_prem=(salary*12)*10/100;
    printf("Insurance Premium=%d",insurance_prem);

}