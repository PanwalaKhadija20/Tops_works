/*make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo
using conditional statement*/
#include<stdio.h>
int main()
{
    int num1,num2;
    char choice;
    printf("Calulator:");
    printf("\nEnter + for Addition");
    printf("\nEnter - for Subtraction");
    printf("\nEnter * for Multiplication");
    printf("\nEnter / for Division");
    printf("\nEnter % for Modulo");
    printf("\nEnter Choice: ");
    scanf("%c",&choice);
    printf("Enter Numbers:");
    scanf("%d %d",&num1,&num2);
    
    switch(choice)
    {

        case '+':
        printf("Addition= %d",num1+num2);
        break;
        case '-':
        printf("\nSubtraction= %d",num1-num2);
        break;
        case '*':
        printf("\nMultiplication= %d",num1*num2);
        break;
        case '/':
        printf("\nDivision= %d",num1/num2);
        break;
        case '%':
        printf("\nModulo= %d",num1%num2);
        break;
        default:
        printf("\nWrong Choice.");
        break;


    }

}