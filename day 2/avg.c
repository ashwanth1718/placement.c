#include<stdio.h>
int main()
{ 
    int  a=50,b=55,c=65,d=40 , sum= a+b+c+d ,avg=sum/5;
    printf("the sum of value %d \n",sum);
    printf("the average %d \n",avg);
    if(avg<89)
    {
        printf("A grade");
       }
       else{
            printf("D grade");
        }
    
    return 0;
}
