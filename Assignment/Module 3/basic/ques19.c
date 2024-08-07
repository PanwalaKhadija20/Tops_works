//Compound Interest 
#include<stdio.h>
int main()
{
    float principle,time,rate,compound_interest;
    printf("Enter Principle Amount: ");
    scanf("%f",&principle);
    printf("Enter Time: ");
    scanf("%f",&time);
    printf("Enter Rate: ");
    scanf("%f",&rate);
    compound_interest=principle*((1+rate/100)*time);
    printf("Compound Interest=%f",compound_interest);

}