//two Array input from user and sort them in ascending or descending order as per user’s choice
#include<stdio.h>
int main()
{
    int array1[5];
    int array2[5];
    int choice,choice1;
    int i,j,temp;
    printf("Enter Array-1 Elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\n Printing Array-1");
    printf("\n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array1[i]);
    }

    printf("\nEnter Array-2 Elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array2[i]);
    }
    printf("\n Printing Array-2");
    printf("\n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array2[i]);
    }

    printf("\n1.Array-1");
    printf("\n2.Array-2");
    printf("\nEnter Choice Of Array :");
    scanf("%d",&choice1);

    printf("\n1.Ascending");
    printf("\n2.Decending");
    printf("\nEnter Choice :");
    scanf("%d",&choice);

    switch(choice1)
    {
    case 1:
    switch(choice)
    {
    case 1:
    //Ascending Order
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
        if(array1[i]<array1[j])
        {
            temp=array1[j];
            array1[j]=array1[i];
            array1[i]=temp;
        }
        }
    }
    printf("\nSorting In Ascending ");
    printf("\n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array1[i]);
    }
    
    
    break;
    case 2:
    //Decending Order
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
        if(array1[i]>array1[j])
        {
            temp=array1[j];
            array1[j]=array1[i];
            array1[i]=temp;
        }
        }
        
    }
    printf("\nSorting In Decending ");
    printf("\n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array1[i]);
    }
    
    break;
    default:
        printf("Invalid Choice!!");
        break;
    }
    break;
case 2:
switch(choice)
    {
    case 1:
    //Ascending Order
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
        if(array2[i]<array2[j])
        {
            temp=array2[j];
            array2[j]=array2[i];
            array2[i]=temp;
        }
        }
    }
    printf("\nSorting In Ascending ");
    printf("\n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array2[i]);
    }
    
    
    break;
    case 2:
    //Decending Order
    for(i=0;i<5;i++)
    { 
         for(j=0;j<i+1;j++)
        {
        if(array2[i]>array2[j])
        {
            temp=array2[j];
            array2[j]=array2[i];
            array2[i]=temp;
            }
        }
    }
    printf("\nSorting In Decending ");
    printf("\n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array2[i]);
    }
    
    break;
    default:
    printf("Invalid Choice!!");
    break;

    }
    break;
default:
printf("Invalid Choice!!");
break;
}

}