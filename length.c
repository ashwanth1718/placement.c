#include<stdio.h>
int main()
{
    char str[20];
    int length=0;
    printf("enter the line:");
    fgets(str,20,stdin);
    while(str[length]!='\n'&&str[length]!='\0')
    {
        length ++;
    }
    printf("%d",length);
    return 0;
} 