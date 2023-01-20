/*Program to check whether a year is a leap year or not. Using switch statement*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d",&year);
    switch(year%100 == 0)
    {
        case 0:
                switch(year%4 == 0)
                {
                    case 0: printf("No, %d is not a leap year",year);
                            break;

                    case 1: printf("Yes, %d is a leap year",year);
                            break;
                };
                break;

        case 1:
                switch(year%400 == 0)
                {
                    case 0: printf("No, %d is not a leap year",year);
                            break;

                    case 1: printf("Yes, %d is a leap year",year);
                            break;
                };
                break;
    }
    return 0;
}