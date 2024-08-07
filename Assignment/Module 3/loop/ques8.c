//program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
int main()
{
    int num,n,max=0;
    printf("Enter 4 Digit Number: ");
    scanf("%d",&num);
    while(num>0)
    {
        n=num%10;
        if(n>max)
        {
        max=n;
        }
        num=num/10;
    }
    printf("Maximum Number Is : %d",max);

}