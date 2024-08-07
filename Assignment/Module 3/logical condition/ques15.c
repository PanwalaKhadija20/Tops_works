// C program to determine eligibility for admission to a professional course
// the following criteria
// Eligibility Criteria :
// Marks in Maths >=65 
//  Marks in Phy >=55 
//  Marks in Chem>=50 
//  Total in all three subject >=190 or Total in Maths and Physics >=140 

#include<stdio.h>
int main()
{
    int maths,phy,chem;
    printf("Enter Your Maths Marks: ");
    scanf("%d",&maths);
    printf("Enter Your Physics Marks: ");
    scanf("%d",&phy);
    printf("Enter Your Chemistry Marks: ");
    scanf("%d",&chem);

    if(((maths>=65) && (phy>=55) && (chem>=50)) && (maths+phy+chem==190))
    {
        printf("Your Marks Are Eligible For Course.");
    }
    else if(maths+phy==140)
    {
        printf("Your Marks Are Eligible For Course.");
    }
    else
    {
        printf("You Are Not Eligible For Course.");
    }

    

}