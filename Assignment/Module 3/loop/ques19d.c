//PATTERN-4

// *        
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
// * * * * *
// * * * * 
// * * * 
// * * 
// *


#include<stdio.h>
int main()
{
    int row,col,space;
    for(row=1;row<=6;row++)
    {
        for(space=0;space>=row;space--)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    int i=5;
    for(row=1;row<=5;row++)
    {
    
        for(col=1;col<=i;col++)
        {
            printf("*  ");
        }
        i--;
        printf("\n");
    }

}
