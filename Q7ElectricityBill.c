/*Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
int main()
{
    float unit,bill,total;
    printf("Enter electricity unit \n");
    scanf("%f",&unit);
    switch(unit<50)
    {
        case 0:
                switch(unit<151)
                {
                    case 0:
                            switch(unit<251)
                            {
                                case 0:
                                        switch(unit>250)
                                        {
                                            case 1:
                                                    bill= 25+75+120+(unit-250)*1.5;
                                                    break;
                                        }
                                        break;

                                case 1:
                                        bill= 25+75+(unit-150)*1.20;
                                        break;
                            }
                            break;

                    case 1:
                            bill= 25 + (unit-50)*.75;
                            //printf("%f\n",unit);
                            break;
                }
                break;

        case 1:
                bill=unit*.5;
                break;
    }

    total=bill+bill*20/100;
    printf("Total bill after adding 20%% surcharge is %.2f",total);



    // int count=0;
    // if(unit<=50)
    //     count++;
    // else if(unit>50 && unit<=150)
    //     count=2;
    // else if(unit>150 && unit<=250)
    //     count=3;
    // else
    //     count=4;
    // switch(count)
    // {
    //     case 1: 
    //             bill=unit*0.5;
    //             total=bill;
    //             total+=total*20/100;
    //             printf("Total bill after adding 20%% surcharge = %.2f",total);
    //             break;
    //     case 2:
    //             bill=unit*0.75;
    //             total=bill;
    //             total+=total*20/100;
    //             printf("Total bill after adding 20%% surcharge = %.2f",total);
    //             break;
    //     case 3: 
    //             bill=unit*1.20;
    //             total=bill;
    //             total+=total*20/100;
    //             printf("Total bill after adding 20%%  surcharge = %.2f",total);
    //             break;
    //     case 4:
    //             bill=unit*1.50;
    //             total=bill;
    //             total+=total*20/100;
    //             printf("Total bill after adding 20%% surcharge = %.2f",total);
    //             break;
    // }
return 0;
}