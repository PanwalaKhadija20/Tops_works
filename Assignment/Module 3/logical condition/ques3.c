//program to check the year is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if((year%4==0) && (year%100!=0) || (year%400==0))
    {
        printf("This Year Is Leap Year.");
        
    }
    else
    {
        printf("This Year Is Not Leap Year.");

    }

}