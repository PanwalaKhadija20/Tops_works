//check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number Is Positive");
    }
    else if(num<0)
    {
        printf("Number Is Negative");
    }
    else
    {
        printf("Number Is Zero");
    }
    

}