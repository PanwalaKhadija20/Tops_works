//average expense
#include<stdio.h>
int main()
{
    int exp1,exp2,exp3,exp4,exp5,Average_Expense;

    printf("Enter your 1st Expense: ");
    scanf("%d",&exp1);

    printf("Enter your 2nd Expense: ");
    scanf("%d",&exp2);

    printf("Enter your 3rd Expense: ");
    scanf("%d",&exp3);

    printf("Enter your 4th Expense: ");
    scanf("%d",&exp4);

    printf("Enter your 5th Expense: ");
    scanf("%d",&exp5);

    Average_Expense=(exp1+exp2+exp3+exp4+exp5)/5;

    printf("Average Expense = %d",Average_Expense);



}