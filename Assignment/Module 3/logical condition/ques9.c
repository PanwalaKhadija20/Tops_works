//Uppercase or Lowercase or Digit or Special character
// Uppercase= 65-90
// Lowercase= 97-122
// Digit = 48-57

#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    if(num>=65 && num<=90) 
    {
        printf("Upper Case=%c",num);
    }
    else if(num>=97 && num<=122)  
    {
        printf("Lower Case=%c",num);
    }
    else if(num>=48 && num<=57)
    {
        printf("Digit=%c",num);
    }
    else 
    {
        printf("Special Character ");
    }

}



