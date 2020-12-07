#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("\nEnter any year:");
    scanf("%d", &year);

    if(year%400==0)
     printf("\nIt is a leap year\n");

      else if(year%100==0)
           printf("\nIt is not a leap year\n");

       else if(year%4==0)
            printf("\nIt is a leap year\n");

    else
        printf("\nIt is not a leap year\n");

    return 0;
}
