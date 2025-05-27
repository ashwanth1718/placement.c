#include<stdio.h>
int main()
{
    char str[20];
    printf("ENTER THE LINE:");
    fgets(str,20,stdin);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!= ' ' && str[i]!='\n') 
        {
        str[j++]=str[i];
        }
        i++;
    }


str[j]='\0';
printf("STRING:%s\n",str);
return 0;
}
