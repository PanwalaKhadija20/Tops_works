// Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
int main() 
{
  char str[100];
  int count=0;
 
  printf("Enter a string: \n");
  gets(str);
  while(str[count]!='\0')
  {
    count++;
  }
 
  printf("\n String length is %d", count);

}

