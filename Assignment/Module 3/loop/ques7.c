//print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main()
{
    long long int num,rev=0,rem;
    printf("Enter Number: ");
    scanf("%lld",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse Number Is : %lld",rev);


}