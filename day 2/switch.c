#include <stdio.h>
int main()
{
    int day=5;
    switch (day)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf ("wenday");
        break;
        case 4:
        printf(" thuday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("sat day");
        break;
        default:
        printf("holiday");
    }
return 0;
}