#include<stdio.h>
#include<ctype.h>
int main()
{ 
    char  str[20];
    printf(" ENTER THE LINE:");
    fgets(str,20,stdin);
    for(int i=0;str[i]!='\0';i++)
    str[i]=toupper(str[i]);
    printf("UPPERCASE :%s",str);
return 0;
}
