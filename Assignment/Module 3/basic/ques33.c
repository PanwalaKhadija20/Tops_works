//Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Power Of Number: ");
    printf("\nPower1 Of Number:%d",num);
    printf("\nPower2 Of Number:%d",num*num);
    printf("\nPower3 Of Number:%d",num*num*num);



}