//check size
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter Number-1 : ");
    scanf("%d",&num1);

    printf("Enter Number-1 : ");
    scanf("%d",&num2);

    sum=num1+num2;
    printf("Sum of The 2 Numbers = %d",sum);

    printf("\nSize Of The Sum Is=%d",sizeof(sum));


}