//Accept 5 names from user at run time.
#include<stdio.h>
int main()
{
    char ch[10];
    int i;
    printf("Enter 5 Names : ");
    for(i=0;i<10;i++)
    {
        scanf("%c",&ch[i]);
    }
    printf("List Of Entered Names Are\n :");
    for(i=0;i<10;i++)
    {    
    printf("%c ",ch[i]);
    }
}
