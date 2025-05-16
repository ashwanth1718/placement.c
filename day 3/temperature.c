#include<stdio.h>
int main()
{
    int temperature;
    printf(" enter the temperature:\n");
    scanf("%d",&temperature);
    if (temperature < 10)
        printf("Wear warm jacket.\n");
    else if (temperature < 20)
        printf("Wear a  sweater.\n");
    else
        printf("Wear a t-shirt .\n");
return 0;
}
