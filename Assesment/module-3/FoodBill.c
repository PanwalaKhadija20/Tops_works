/*C Programming Assessment Test
• Write a program to demonstrate a Food Billing System.
• Display the Menu using appropriate codes.
• For Menu kinds of Programming , use the core logic of
Loops/conditional statements.

Execution Flow of the Project:
First, display the food items available
Then after the user can choose any of the item displayed
Also take the quantity of selected food item by the customer, then ask
the user that he/she wanna select more?
If yes then again display the food items available and take an order from
the customer. Here, you have to consider the total bill as the price of
food items previously selected plus the price of new items added
should display as a whole bill.
If no then display the final bill on the screen*/


#include<stdio.h>;
int main()
{
    int choice,quantity,amount,total,again,res=0;
    label1:
    printf(" -------MENU------- \n");
    printf("\n1.Pizza  price=180/pcs ");
    printf("\n2.Burger  price=100/pcs ");
    printf("\n3.Dosa  price=120/pcs ");
    printf("\n4.Idli  price=50/pcs ");
    printf("\nPlease Enter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("You have Selected Pizza...");
        break;
        case 2:
        printf("You have Selected Burger...");
        break;
        case 3:
        printf("You have Selected Dosa...");
        break;
        case 4:
        printf("You have Selected Idli...");
        break;
        default:
        printf("You have Entered Invalid Choice...");
        break;
    }

printf("\nEnter Quantity: ");
scanf("%d",&quantity);

if(choice==1)
{
    amount=180*quantity;
    printf("Amount= %d",amount);
}
else if(choice==2)
{
    amount=100*quantity;
    printf("Amount= %d",amount);
}
else if(choice==3)
{
    amount=120*quantity;
    printf("Amount= %d",amount);
}
else if(choice==4)
{
    amount=50*quantity;
    printf("Amount= %d",amount);
}
else
{
    printf("Invalid Quanity");
}



printf("\n\nDo You Want To Place Any More Order?????");
printf("\n Enter\n 1 for YES\n 2 for No ... ");
scanf("%d",&again);
if(again==1)
{
    goto label1;
}
else
{
total=amount;
printf("\nYour Total Amount Is = %d ",total);
res+=total;
printf("\nYour Total Amount Is = %d ",res);
}


}