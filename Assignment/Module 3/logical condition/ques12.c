// find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 1st Number: ");
    scanf("%d",&num1);
    printf("\nEnter 2nd Number: ");
    scanf("%d",&num2);
    printf("\nEnter 3rd Number: ");
    scanf("%d",&num3);
   
    ((num1>num2) && (num1>num3))?printf("1st Number Is Maximum."): printf("");

    ((num2>num1) && (num2>num3))?printf("2nd Number Is Maximum."): printf("");

    ((num3>num1) && (num3>num2))?printf("3rd Number Is Maximum."): printf("");


}