//Compound Interest 
#include<stdio.h>
int main()
{
    float principle,time,rate,amount,compound_interest;
    printf("Enter Principle Amount: ");
    scanf("%f",&principle);
    printf("Enter Time: ");
    scanf("%f",&time);
    printf("Enter Rate: ");
    scanf("%f",&rate);
    amount=principle*((1+rate/100)*time);
    printf("Amount=%f",amount);
    compound_interest=amount-principle;
    printf("\nCompound Interest=%f",compound_interest);
    

}