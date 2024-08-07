// program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
int main()
{
    float ang1,ang2,ang3;
    printf("Enter 1st Angle: ");
    scanf("%f",&ang1);
    printf("Enter 2nd Angle: ");
    scanf("%f",&ang2);
    printf("Enter 3rd Angle: ");
    scanf("%f",&ang3);
    if(ang1+ang2+ang3==180)
    {
        printf("Triangle Can Be Formed.");
    }
    else
    {
        printf("Triangle Cannot Be Formed.");
    }

}