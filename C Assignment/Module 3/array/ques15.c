// Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main()
{
    int array[5];
    int i,j,temp;
    printf("Enter 5 Array Elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nPrinting Array\n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[i]<array[j])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    printf("\nSorting Array In Ascending Order: \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }

}

