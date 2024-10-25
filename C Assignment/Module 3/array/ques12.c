// to accept 5 students name and store it in array
#include<stdio.h>
int main()
{
    int i;
    int name[5][20];
    printf("Enter 5 Names: ");
    for(i=0;i<5;i++)
    {
        scanf("%s",&name[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n%s",&name[i]);
    }

}