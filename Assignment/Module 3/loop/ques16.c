//Calculate the Sum of Natural Numbers Using the While Loop
// 1 + 2 + 3 +4 + 5 +...n 
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    while(num>0)
    {
        sum+=num;
        num--;
    }
    printf("Sum Of Natural Numbers Is = %d",sum);

}
