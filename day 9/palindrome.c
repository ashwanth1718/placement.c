#include<stdio.h>
int reverse(int n)
{
    int rev=0,real;
    real=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
        
    }
    if(real==rev)
    {
        printf("number is palindrome.\n");
    }
    else
    {
        printf("number is not palindrome.\n");
    }
    return rev;
}
int main()
{
    printf(" enter a number:%d\n",reverse(18));
    return 0;
}
