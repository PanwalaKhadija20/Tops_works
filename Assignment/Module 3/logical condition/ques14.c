//find the largest of three numbers
#include<stdio.h>
int main()
{ 
    int num1,num2,num3;
    printf("Enter Three Numbers :");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("Number 1 Is Largest.");
    }
    else if(num2>num3 && num2>num1)
    {
        printf("Number 2 Is Largest.");
    }
    else
    {
        printf("Number 3 Is Largest.");
    }
}