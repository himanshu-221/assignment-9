/*Program to convert a positive number into a negative number and negative number
into a positive number using a switch statement.
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    switch(num>=0)
    {
        case 0:
                num=num*(-1);
                printf("\n\n%d\n",num);
                break;
        case 1: 
                num=num*(-1);
                printf("\n\n%d\n",num);
                break;
    }
    return 0;
}