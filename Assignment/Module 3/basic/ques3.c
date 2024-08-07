//Area of Circle & Circumference of Circle
#include<stdio.h>
int main()
{
    int radius;
    printf("Enter Radius: " );
    scanf("%d",&radius);
    const float pi=3.14;
    float area;
    float circumference;
    area=pi*radius*radius;
    printf("Area Of Circle=%f",area);
    circumference=2*pi*radius;
    printf("\nCircumference Of Circle=%f",circumference);

}