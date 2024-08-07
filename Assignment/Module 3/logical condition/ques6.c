//programme to check alpha is vowel or not
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