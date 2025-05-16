#include<stdio.h>
int main()
{
int yr=1000;
if((yr%4==0 && yr%100!=0) || yr%400==0)
{
    printf("yes leap year");
}
else
{
    printf(" not a leap year");

}
return 0;
}