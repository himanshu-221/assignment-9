/*Write a program which takes the month number as an input and display number of
days in that month.
*/

#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month number\n");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("31 Day's in January month\n");
        break;
    case 2:
        printf("28 Day's in Februry month\nOr 29 day's in leap year");
        break;
    case 3:
        printf("31 Day's in March month\n");
        break;
    case 4:
        printf("30 Day's in April month\n");
        break;
    case 5:
        printf("31 Day's in May month\n");
        break;
    case 6:
        printf("30 Day's in June month\n");
        break;
    case 7:
        printf("31 Day's in July month\n");
        break;
    case 8:
        printf("30 Day's in August month\n");
        break;
    case 9:
        printf("31 Day's in September month\n");
        break;
    case 10:
        printf("30 Day's in October month\n");
        break;
    case 11:
        printf("31 Day's in November month\n");
        break;
    case 12:
        printf("30 Day's in December month\n");
    
    default:
        if(month > 12)
        printf("Pleass enter a valid month");
        break;
    }
}