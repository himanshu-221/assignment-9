/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit */

#include<stdio.h>
int main()
{
    char choice;
    int a,b,c;
    while(1)
    {
        printf("A. isosceles triangle\nB. right angle triangle\nC. equilateral triangle\n");
        printf("enter your choice\n");
        fflush(stdin);
        scanf("%c",&choice);
        fflush(stdin);
        switch(choice)
        {
            case 'A': printf("Enter sides of triangle\n");
                    scanf("%d %d %d",&a,&b,&c);
                    if(a==b || b==c || c==a)
                    {
                        printf("yes, this triangle is isisceles triangle\n\n");
                    }
                    else{
                        printf("this is not isisceles triangle\n\n");
                    }
                    break;
            case 'B': printf("Enter sides of triangle\n");
                    scanf("%d %d %d",&a,&b,&c);
                    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
                    {
                        printf("yes, this triangle is right angle triangle\n\n");
                    }
                    else{
                        printf("this is not right angle triangle\n\n");
                    }
                    break;
            case 'C': printf("Enter sides of triangle\n");
                    scanf("%d %d %d",&a,&b,&c);
                    if(a==b && b==c)
                    {
                        printf("yes, this triangle is equilateral triangle\n\n");
                    }
                    else{
                        printf("this is not equilateral triangle\n\n");
                    }
                    break;
            default: printf("Enter a valid operation");
                    break;
        }
    }
}