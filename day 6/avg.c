#include<stdio.h>
int main()
{
    int sum=0;
    float avg;
    int a[5]={1,2,3,59,100};
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
        
    }
    avg=sum/5;
    printf(" sum of num:%d \n",sum);
    printf(" average :%2f\n",avg);
    return 0;
}