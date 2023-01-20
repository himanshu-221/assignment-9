/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
int main()
{
    int num1,num2,choice;
    while(1){
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Divition\n5. Exit\n");
    printf("Which operation you want to perform\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:  
            printf("Enter two numbers\n");
            scanf("%d %d",&num1,&num2);
            printf("Addition is %d\n\n",num1+num2);
            break;
        case 2:
            printf("Enter two numbers\n");
            scanf("%d %d",&num1,&num2);
            printf("Subtraction is %d\n\n",num1-num2);
            break;
        case 3:
            printf("Enter two numbers\n");
            scanf("%d %d",&num1,&num2);
            printf("multiplication is %d\n\n",num1*num2);
            break;
        case 4:
            printf("Enter two numbers\n");
            scanf("%d %d",&num1,&num2);
            printf("Divition is %d\n\n",num1/num2);
            break;
        case 5:
            return 0;
        default:
            if(choice>5)
            {
                printf("Pleass perform a valid operation");
            }
    }
    }
    return 0;
}