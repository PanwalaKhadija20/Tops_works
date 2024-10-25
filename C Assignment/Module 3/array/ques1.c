//Write a program to find out the max number from given array using function
#include<stdio.h>
int findmax(int arr[], int n)
{
int max= arr[0];

for(int i=1; i< n; i++)
{
    if (arr[i] > max){
    max=arr[i];
    }
}
return max;
}
int main(){
int n, i, max;
printf("Enter number of elements:\n");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements \n", n);
for(i=0; i<n; i++)
{
    printf("elements%d:", i+1);
    scanf("%d", &arr[i]);

}
  max= findmax(arr, n);
printf("maximum number is :%d\n", max);

}
