// accept 5 numbers from user and display in reverse order using for loop and array 
#include<stdio.h>
int main()
{
    int num[5];
    int i,j;
    printf("Enter 5 Number: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Printing Numbers ");
    for(i=0;i<5;i++)
    {
        printf("\n%d",num[i]);
    }
    printf("\nPrinting Numbers In Reverse Order ");
    for(i=0;i<5;i++)
    {
        for(j=5;j<0;j--)
        {
        printf("\n%d",num[j]);
        }
    }

}