// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100],result;
  	int i,len;
  	int max=-1;
  	int freq[200]={0}; 

  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len=strlen(str);
  	
  	for(i=0;i<len;i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i=0;i<len;i++)
  	{
		if(max<freq[str[i]])
		{
			max=freq[str[i]];
			result=str[i];
		}
	}
	printf("\n The Maximum Occurring Character in a Given String = %c ", result);

}