// Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
int main()
{
    int num,rev=0,rem,i;
    // printf("Enter 3 Numbers : ");
    for(i=1;i<3;i++)
    {
        printf("Enter 3 Numbers\n : ");
        scanf("%d",&num);
    while(num>0)
    {
        // scanf("%d",&num);
        int org_num=num;
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
        if(org_num==rev)
        {
            printf(" %d Is A Palidrome Number",org_num);
        }
        else
        {
            printf(" %d Is Not A Palidrome Number",org_num);
        }
        // num++;
    }
}
}


