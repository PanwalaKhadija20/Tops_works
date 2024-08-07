//Accept the input month number and print number of days in that month.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Month Number : ");
    scanf("%d",&num);
    if((num==1) || (num==3) || (num==5) || (num==7) || (num==8) || (num==10) || (num==12))
    {
        printf("This Month Has 31 Days.");
    }
    else if ((num==4) || (num==6) || (num==9) || (num==11))
    {
        printf("This Month Has 30 Days.");
    }
    else if ((num==2))
    {
        printf("This Month Has 28 Days");
    }
    else 
    {
        printf("Invalid.");
    }

}