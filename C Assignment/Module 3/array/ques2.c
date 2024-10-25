//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int show(int a,char ch,int b,int res)
{
    printf("%d %c %d=%d",a,ch,b,res);
}
int add(int a,int b)
{
    int res=a+b;
    show(a,'+',b,res);
}
int sub(int a,int b)
{
    int res=a-b;
    show(a,'-',b,res);
}
int multi(int a,int b)
{
    int res=a*b;
    show(a,'*',b,res);
}
int div(int a,int b)
{
    int res=a/b;  
    show(a,'/',b,res);
}

int main()
{
    int num1,num2,choice;
    do
    {
        printf("Enters Numbers: ");
        scanf("%d %d",&num1,&num2);
        printf("\n 1. Addition");
        printf(" \n 2. Subtraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\nEnters Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            add(num1,num2);
            break;
            case 2: 
            sub(num1,num2);
            break;
            case 3: 
            multi(num1,num2);
            break;
            case 4: 
            div(num1,num2);
            break;
            default :
            printf("Invalid Choice..");
            break;
        }
       
    } 
    while (choice<=4);
    

}






