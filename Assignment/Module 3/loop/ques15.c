//Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("Enter  10 Number: ");
    int count=0;
    while(count<10)
    {
        scanf("%d",&num);
        sum+=num;
        count++;
    }
 printf("Sum Of 10 Numbers : %d ",sum);
}