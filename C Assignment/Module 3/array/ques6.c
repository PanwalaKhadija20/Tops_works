//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
int main()
{
    int arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],multi[20][20];
    int row,col,r,c;
    printf("Enter Number Of Rows : ");
    scanf("%d",&r);
    printf("Enter Number Of Columns : ");
    scanf("%d",&c);

    printf("Enter Array-1 Elements :");
    for(row=0;row<r;row++)
    {
        for(col=0;col<c;col++)
        {
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter Array-2 Elements :");
    for(row=0;row<r;row++)
    {
        for(col=0;col<c;col++)
        {
            scanf("%d",&arr2[row][col]);
        }
    }

//Printing Arrays
printf("\nPrinting Array-1 : ");
for(row=0;row<r;row++)
    {
        printf("\n");
        for(col=0;col<c;col++)
        {
            printf(" %d ",arr1[row][col]);
        }
    }
    printf("\nPrinting Array-2 : ");
    for(row=0;row<r;row++)
    {
        printf("\n");
        for(col=0;col<c;col++)
        {
            printf(" %d ",arr2[row][col]);
        }
    }

    //Summation 
    printf("\nSummation Of Arrays : ");
    for(row=0;row<r;row++)
    {
        for(col=0;col<c;col++)
        {
            sum[row][col]=arr1[row][col]+arr2[row][col];
        }
    }
    for(row=0;row<r;row++)
    {
        printf("\n");
        for(col=0;col<c;col++)
        {
            printf(" %d ",sum[row][col]);
        }
    }
    //Subtraction
    printf("\nSubtraction Of Arrays : ");
    for(row=0;row<r;row++)
    {
        for(col=0;col<c;col++)
        {
            sub[row][col]=arr1[row][col]-arr2[row][col];
        }
    }
    for(row=0;row<r;row++)
    {
        printf("\n");
        for(col=0;col<c;col++)
        {
            printf(" %d ",sub[row][col]);
        }
    }
    //Multiplication
    printf("\nMultiplication Of Arrays : ");
    for(row=0;row<r;row++)
    {
        for(col=0;col<c;col++)
        {
            multi[row][col]=arr1[row][col]*arr2[row][col];
        }
    }
    for(row=0;row<r;row++)
    {
        printf("\n");
        for(col=0;col<c;col++)
        {
            printf(" %d ",multi[row][col]);
        }
    }


}