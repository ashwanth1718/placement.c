#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="AMMA";
    int st=0;
    int ed=strlen(str)-1;
    int palindrome=1;
    while(st<ed)
    {
    if (str[st] !=str[ed])
    {
    palindrome=0;
    break;
    }
    st++;
    ed--;
    }
    if(palindrome)
    printf("%s is palindrome",str);
    else
    printf("%s not a palindrome",str);
    
    return 0;
}


