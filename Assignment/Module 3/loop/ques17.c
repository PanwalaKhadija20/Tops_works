//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    int even=0,odd=0;
    while(num<=5)
{
    scanf("%d",&num);
    if(num%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
      num++;
}
printf("Even Number = %d ",even);
 printf("Odd Number = %d ",odd);
}