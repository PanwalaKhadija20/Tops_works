//Accept 5 numbers from user and find those numbers factorials 
#include<stdio.h>
int main()
{
    int num;
    int i,j;
    printf("Enter 5 Numbers : ");
    for(i=1;i<=5;i++){
        scanf("%d",&num);
        int res=1;
    
    for(j=1;j<=num;j++)
    {
      res=res*j;
    }
    printf("Factorial Of %d : %d\n ",num,res);
    }
    
}
