// armstrong number :it is a number of it digit of its individual number;
// eg: 153= 1^3+5^3+3^3= 1+125+27  =153;

// Armstrong Number Using While Loop

#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter 3 Digit Number :");
    scanf("%d",&num);
    int org_num=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
       
    }
    printf("Sum Of Number= %d\n",sum);
    


    if(org_num==sum)
    {
        printf("It Is An Armstrong Number.");
    }
    else
    {
        printf("It Is Not An Armstrong Number.");
    }
}





