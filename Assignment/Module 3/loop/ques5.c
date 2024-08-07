//print factorial of given number using FOR loop
#include<stdio.h>
int main()
{
    int num,i,res=1;
    printf("Enter Number :");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        res=res*i;
    }
     printf("%d",res);
    
}