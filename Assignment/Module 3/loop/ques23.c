//Program to Reverse a Number Using FOR Loop 
#include<stdio.h>
int main()
{
    int num,rem=0,rev=0,i;
    printf("Enter 4 Digit Number : ");
    scanf("%d",&num);
    i==num;
    for(i=1;i<=4;i++)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    printf("Reverse Number Is : %d",rev);

}
