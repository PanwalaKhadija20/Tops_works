//print table 
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Table Of %d \n",num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n  ",num,i,num*i);
    }
}