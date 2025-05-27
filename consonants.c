#include<stdio.h>
#include<ctype.h>
int main()
{ 
    char str[20];
    int vowels=0;
    int consonants=0;
    printf("ENTER A LINE:");
    fgets(str,20,stdin);
for( int i=0;str[i]!='\0';i++)
{
    int ch=tolower(str[i]);
    if(isalpha(ch))
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vowels ++;
        }
        else
        {
            consonants ++;
        }
    }
}
printf(" vowels:%d\n",vowels);
printf("consonants:%d\n",consonants);
return 0;
}
