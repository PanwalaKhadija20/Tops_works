//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include<stdio.h>
int main()
{
    int num,first=0,last=0,sum=0;
    printf("Enter 4 Digit Number: ");
    scanf("%d",&num);
    last=num%10;

    while(num>10)
    {
        num=num/10;
    }
    first=num;
    sum=first+last;

    printf("Summation Of First & Last Digit Is : %d",sum);

}