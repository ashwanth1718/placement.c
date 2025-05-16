#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a small letter= ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
         printf("\n\n VOWEL");
         break;
        case 'e':
         printf("\n\n VOWEL");
         break;
        case 'i':
         printf("\n\n VOWEL");
         break;
        case 'o':
         printf("\n\n VOWEL");
         break;
        case 'u':
         printf("\n\n VOWEL");
         break;
        default:
         printf("\n\n The letter is consonant");
    }
    return 0;