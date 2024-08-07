//o accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main()
{
    float height;
    printf("Enter Your Height(in feet): ");
    scanf("%f",&height);
    if(height>5.7 && height<=6.5 )
    {
        printf("TALL");
    }
    else if ( height>5.0 && height<=5.7)
    {
        printf("MEDIUM");
    }
    else
    {
        printf("SHORT");
    }

}