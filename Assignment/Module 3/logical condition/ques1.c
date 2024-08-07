//program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter Integers: ");
    scanf("%d %d",&num1,&num2);
    
    if(num1==num2)
    {
        printf("Both Integers Are Equal...");

    }
    else
    {
        printf("Both Integers Are Not Equal...");
    }
    
    
}