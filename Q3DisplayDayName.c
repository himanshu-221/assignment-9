/*Write a program which takes the day number of a week and displays a unique
greeting message for the day.*/
#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day number(1-7)\n");
    scanf("%d",&day);
    switch (day)
    {
    case 1: printf("okay Monday\n");
        break;
    case 2: printf("enjoy your tuesday\n");
        break;
    case 3: printf("wonderfull wednesday\n");
        break;
    case 4: printf("have a nice thursday\n");
        break;
    case 5: printf("yeah... it's friday\n");
        break;
    case 6: printf("peacefull saturday\n");
        break;
    case 7: printf("enjoy it's sunday\n");
        break;
    default: printf("invalid day!");
        break;
    }
    return 0;
}