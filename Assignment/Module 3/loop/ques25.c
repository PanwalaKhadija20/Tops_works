//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("Enter 'n' Terms : ");
    scanf("%d",&num);
    i==num;
    for(i=num;i>=1;i--)
    {
        sum+=i*i;
    
        
    }
    printf("(1 * 1) + (2 * 2) + (3 * 3) + ...(%d * %d)  = %d ",num,num,sum);
}