//print factorial of given number using WHILE loop
#include<stdio.h>
int main()
{
    int num,res=1;
    printf("Enter Number :");
    scanf("%d",&num);
    int i=num;
    while(i>=1)
    {
        res=res*i;
        i--;
    }
     printf("Factorial Of %d : %d ",num,res);

}