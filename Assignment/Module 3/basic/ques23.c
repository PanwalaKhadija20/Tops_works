//Swapping 
#include<stdio.h>
int main()
{
    int num1,num2,multiplication,division;

    printf("Enter Number 1: ");
    scanf("%d",&num1);

    printf("Enter Number 2: ");
    scanf("%d",&num2);

    num1=num1*num2;
    num2=num1/num2;
    num1=num1*num2;
    
    
    printf("\n After SwappingNumber-1: %d",num1);
    // scanf("%d",&num1);

    printf("\n After Swapping Number-2: %d",num2);
    // scanf("%d",&num2);
   


}