//convert years into days and days into years
#include<stdio.h>
int main()
{
    int years,days;

    printf("Enter Years : ");
    scanf("%d",&years);

    days=(years)*365;
    printf("Years Into days= %d",days);

    printf("\nEnter Days : ");
    scanf("%d",&days);

    years=(days)/365;
    printf("Days Into Years : %d",years);

}
