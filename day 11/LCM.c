#include<stdio.h>
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
int LCM(int a,int b)
{
    return (a*b)/GCD(a,b); 
    
}
int main()

{
    printf("GCD VALUE :%d\n",GCD(12,18));
    printf("LCM VALUE :%d\n",LCM(12,18));
    return 0;
}


