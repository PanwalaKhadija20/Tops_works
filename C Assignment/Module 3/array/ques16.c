//Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main()
{
    int array[5];
    int i,sum=0;
    printf("Enter 5 Numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    
    }
    printf("Sum Of Array Is: %d ",sum);
}