//years into months & days
#include<stdio.h>
int main()
{
    float years,days,months;
    printf("Enter Years : ");
    scanf("%f",&years);

    printf("Years Into Months: ");
    months=(years)*12;
    printf("%f",months);

    printf("\nYears Into Days: ");
    days=(years)*365;
    printf("%f",days);

}