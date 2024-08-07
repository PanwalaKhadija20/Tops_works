//1.input the week number and print day
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Week Number : ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("MONDAY!!");
        break;
        case 2:
        printf("TUESDAY!!");
        break;
        case 3:
        printf("WEDNESDAY!!");
        break;
        case 4:
        printf("THURSDAY!!");
        break;
        case 5:
        printf("FRIDAY!!");
        break;
        case 6:
        printf("SATURDAY!!");
        break;
        case 7:
        printf("SUNDAY!!");
        break;
        default:
        printf("INVALID!!");
        break;
    }
    
}
//2.programme to check alpha is vowel or not
#include<stdio.h>
int main()
{
    char vowels;
    printf("Enter Alphabet : ");
    scanf("%c",&vowels);
    switch(vowels)
    {
        case 'A':
        case 'a': 
        printf("A Is A Vowel.");
        break;
        case 'E':
        case 'e': 
        printf("E Is A Vowel.");
        break;
        case 'I':
        case 'i': 
        printf("I Is A Vowel.");
        break;
        case 'O':
        case 'o': 
        printf("O Is A Vowel.");
        break;
        case 'U':
        case 'u': 
        printf("U Is A Vowel.");
        break;
        default: 
        printf("Alphabet Is A Constant.");
        break;
    }
}