//take 10 no. Input from user find out below values
// a. How many Even numbers are there
// b. How many odd numbers are there
// c. Sum of even numbers
// d. Sum of odd numbers

#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    int even=0,odd=0;
    int count=0;
    int sum_even=0,sum_odd=0;
    while(count<10)
    {
    scanf("%d",&num);
    if(num%2==0)
    {
        even++;
        sum_even+=num;
    }
    else
    {

        odd++;
        sum_odd+=num;
    }
      count++;
}
printf("Even Number\n= %d ",even);
printf("Odd Number\n = %d ",odd);
printf("Sum Of Even Number\n = %d ",sum_even);
printf("SumOf Odd Number\n = %d ",sum_odd);

}
