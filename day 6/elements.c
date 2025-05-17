#include <stdio.h>
int main() 
{
int a[5];
printf("enter a value:");
for(int i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("array value:\n");
for(int i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
    return 0;
}

