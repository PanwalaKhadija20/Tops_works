//(1) + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) + ... + (1+2+3+4+ ..n)
#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("Enter 'n' Terms : ");
    scanf("%d",&num);
    i==num;
    for(i=1;i<=num;i++)
    {
        sum+=i*(i+1)/2;
    
        
    }
    printf("((1) + (1+2) + (1+2+3) + (1+2+3+4)  ... + (1+2+3+4+ ..%d)  = %d ",num,sum);
}