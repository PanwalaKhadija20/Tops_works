// Perform Palindrome number using for loop and function

// Perform Palindrome number using for LOOP
// #include<stdio.h>
// int main()
// {
//     int num,i,rev=0,rem;
//     printf("Enter 4 Digit Number : ");
//     scanf("%d",&num);
//     int org_num=num;
//     while(num>0)
//     {
//         rem=num%10;
//         rev=rev*10+rem;
//         num/=10;
//     }
//     if(rev==org_num)
//     {
//         printf("It Is A Palindrome...");
//     }
//     else
//     {
//         printf("It Is Not A Palindrome...");
//     }
// }





// Perform Palindrome number using for FUNCTION
#include<stdio.h>
int fun()
{
    int num,rem,rev=0;
    while(num>0)
    {
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
    
    }
    
}

int main()
{
    int num,rev;
    printf("Enter 4 Digit Number : ");
    scanf("%d",&num);
    int fun();
    printf("%d",rev);
    int org_num=num;
    if(rev==org_num)
    {
        printf("It Is A Palindrome...");
    }
    else
    {
        printf("It Is Not A Palindrome...");
    }
}