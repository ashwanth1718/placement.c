#include<stdio.h>
int temperature(int temp)
{
    if(temp<10)
    {
        printf("Wear warm jacket.\n");
    }
    else if(temp<20)
    {
        printf("Wear a  sweater.\n");
    }
    else
    {
        printf("Wear a t-shirt.\n");
    }
    return temp;
}
int main()
{
    temperature(5);
    return 0;
}