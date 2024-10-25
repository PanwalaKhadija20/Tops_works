// accept 5 numbers from user and check entered number is even or odd using of array 
#include<stdio.h>
int main()
{
    int array[5];
    int i;
    printf("Enter 5 Numbers: ");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            printf("\n%d is Even...",array[i]);
        }
        else 
        {
            printf("\n%d is Odd...",array[i]);
        }
    }
}