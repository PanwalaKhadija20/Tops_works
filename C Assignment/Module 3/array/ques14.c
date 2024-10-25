//.Perform 2D matrix array
#include<stdio.h>
int main()
{
    int m,n;
    int array[2][2]={{1,2},{3,4}};
    printf("\nPrinting 2D Array\n");
    for(int m=0;m<2;m++)
    {
        for(int n=0;n<2;n++)
        {
            
            printf("%d  ",array[m][n]);
            
        }
         printf("\n");
    } 
}



