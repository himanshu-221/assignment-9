/*Program to Convert even number into its upper nearest odd number Switch
Statement.*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a even number\n");
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 0:
                printf("%d = is not a even number",num);
                break;
        case 1:
                num++;
                printf("upper nearest odd number is = %d",num);
                break;
    }
    return 0;
}