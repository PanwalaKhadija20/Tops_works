//PATTERN-3

//        *
//      * * *
//    * * * * *
//  * * * * * * * 
//* * * * * * * * * 

#include<stdio.h>
int main()
{
    int row,col,space,n=5;
    for(row=1;row<=n;row++)
    {
        for(space=5;space>=row;space--)
        {
            printf("   ");
        }
        for(col=1;col<=row*2-1;col++)        
        {
           printf("*  "); 
        }
        printf("\n");
    }
}