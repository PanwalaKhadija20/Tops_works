//program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main()
{
    int num,n,sum=0;
    printf("Enter 4 Digit Number: ");
    scanf("%d",&num);
    while(num>0)
    {
        n=num%10;
        sum+=n;
        num=num/10;
      
    }
    printf("Summation Of Number Is = %d",sum);

}

