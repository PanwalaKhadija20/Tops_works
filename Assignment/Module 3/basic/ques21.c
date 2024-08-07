//Swapping 
#include<stdio.h>
int main()
{
    int num1,num2,num3=5;

    printf("Enter Number 1: ");
    scanf("%d",&num1);

    printf("Enter Number 2: ");
    scanf("%d",&num2);

    //printf("\nswapping without using 3 variable ");
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    printf("\nSwapping Without Using 3rd Variable, Number-1 = %d",num1);
    printf("\nSwapping Without Using 3rd Variabl, Number-2 = %d",num2);

    printf("\nswapping numbers using 3rd variable:");

    num1=num2;
    num2=num3;
    num3=num1;
    
    printf("\n After SwappingNumber-1: %d",num1);
    printf("\n After Swapping Number-2: %d",num2);
    



}