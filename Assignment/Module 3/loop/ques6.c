// print Fibonacci series up to given numbers
// 0 1 1 2 3 5 8 13 21
#include<stdio.h>
int main()
{
    int num,res;
    int n1=0,n2=1;
    printf("Enter Number Of Terms :");
    scanf("%d",&num);
    printf("%d %d ",n1,n2);
    int count=2;
    while(count<=num)
    {
        res=n1+n2;
        n1=n2;
        n2=res;
        count++;
        printf("%d ",res);
    }

}