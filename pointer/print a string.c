#include<stdio.h>
int main()
{
    char name[20];
    printf("enter your name:");
  fgets(name,20,stdin);
    printf("%s",name);
    return 0;
}