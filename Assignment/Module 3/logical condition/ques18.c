// program to calculate profit and loss on a transaction
#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter Cost Price: ");
    scanf("%f",&cp);
    printf("Enter Selling Price: ");
    scanf("%f",&sp);

    if(profit=sp-cp)
    {
       printf("PROFIT=%f",profit);
    }
    else if (loss=cp-sp)
    {
        printf("LOSS=%f",loss);
    }
    else 
    {
        printf("NO PROFIT NO LOSS!!!");
    }

}