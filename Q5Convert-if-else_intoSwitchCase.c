/*Convert the following if-else-if construct into switch case:
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid") */

#include<stdio.h>
int main()
{
    int var;
    printf("Enter a number(1-3)\n");
    scanf("%d",&var);
    switch(var)
    {
        case 1: printf("good\n");
            break;
        case 2: printf("better\n");
            break;
        case 3: printf("best\n");
            break;
        default: printf("not a valid arrgument\n");
            break;
    }
    return 0;
}