/*
Description:

Suppose, in a week let us assume first day is 'Sunday', then second day will be 'Monday' and so on. If first day is 'Monday' then the second day will be 'Tuesday' and so on.
Pr-requisites:-

Arithmetic operators
Switch Case
Objective: -

To understand the concept of Switch Case
Inputs: -
      Positive integer say 'N'. Where 1 <= 'N' <= 365.
      1 <= Starting day <= 7
      Option to set the first day.

Example :

       Where start_day = Wednesday
       Nth day = 5
       5th day of the year is Monday

Sample execution: -
Test Case 1:
user@emertxe] ./day_of_the_year
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
Test Case 2:
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 3
The day is Wednesday
Test Case 3: 
Enter the value of 'n' : 9

Choose First Day :

1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday

Enter the option to set the first day : 8
Error: Invalid input, first day should be > 0 and <= 7
Test Case 4:

Enter the value of 'n' : 0
Error: Invalid Input, n value should be > 0 and <= 365
Test Case 5:
Enter the value of 'n' : 366
Error: Invalid Input, n value should be > 0 and <= 365
*/

#include <stdio.h>

int main()
{
    int nth_day;

    printf("Enter the value of n: ");
    scanf("%d",&nth_day);

    if(nth_day > 0)
    {
        if(nth_day <= 365)
        {
            printf("Choose First Day\n");
            printf("1.Sunday\n");
            printf("2.Monady\n");
            printf("3.Tuesday\n");
            printf("4.Wednesday\n");
            printf("5.Thursday\n");
            printf("6.Firday\n");
            printf("7.Saturday\n");

            int first_day;

            printf("Enter the option to set the first day :");
            scanf("%d",&first_day);

            if(first_day > 0)
            {
                if(first_day <= 7)
                {
                    switch ((nth_day + first_day -1) % 7)
                    {
                        case 1:
                            printf("The day is Sunday\n");
                            break;
                        
                        case 2:
                            printf("The day is Monday\n");
                            break;
                        
                        case 3:
                            printf("The day is Tuesday\n");
                            break;
                        
                        case 4:
                            printf("The day is Wednesday\n");
                            break;
                        
                        case 5:
                            printf("The day is Thursday\n");
                            break;
                        
                        case 6:
                            printf("The day is Firday\n");
                            break;
                        
                        case 0:
                            printf("The day is Saturday\n");
                            break;
                    }
                }
                else
                {
                    printf("Error: Invalid input,first day should be >0 and <=7");
                }
            }
            else
            {
                printf("Error: Invalid input,first day should be >0 and <=7");
            }
            
        }
        else
        {
            printf("Error: Invalid Input,n value should be >0 and <=365");
        }      
    }
    else
    {
        printf("Error: Invalid Input,n value should be >0 and <=365");    
    }

    return 0;
}