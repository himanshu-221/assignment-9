/* C program to find all roots of a quadratic equation using switch case*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter values for quardiatic equation a,b,c\n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch(d<0)
    {
        case 0:
                switch(d==0)
                {
                    case 0:
                            printf("roots are imaginary and distinct\n");
                            r1=(-b)+(sqrt(d));
                            r2=(-b)-(sqrt(d));
                            printf("root 1 is %.2f and root 2 is %.2f",r1,r2);
                            break;
                    case 1:
                            printf("roots are real and equal\n");
                            r1=(-b)/(2*a);
                            r1=(-b)/(2*a);
                            printf("root 1 is %.2f and root 2 is %.2f",r1,r2);
                            break;
                }
                break;

        case 1:
                printf("Roots are imaginary\n");
                r1=(-b)+(sqrt(d));
                r2=(-b)-(sqrt(d));
                printf("root 1 is %.2f and root 2 is %.2f",r1,r2);
                break;
    }
    return 0;
}