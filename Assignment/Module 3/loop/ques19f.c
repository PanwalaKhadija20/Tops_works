//PATTERN-6

//A
//A B
//A B C 
//A B C D 
//A B C D E 


#include<stdio.h>
int main()
{
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++)
    {
       
        for(col=1;col<=row;col++)
        {
             printf(" %c ",ch);
             ch++;
        }
        printf("\n");
        // ch++;
    }
    
}