//years into months & days
#include<stdio.h>
int main()
{
    float minutes,hours,seconds;
    printf("Enter Minutes : ");
    scanf("%f",&minutes);

    printf("Minutes Into Hours: ");
    hours=minutes/60;
    printf("%f",hours);

    printf("\nMinutes Into Seconds: ");
    seconds=(minutes)*60;
    printf("%f",seconds);

}