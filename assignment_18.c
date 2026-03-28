/*
Description:

Read number n from user.
Validate the given number
Call main function from main for calculating factorial.
Prompt for continue option without using loop.
Pr-requisites:-

Storage Classes
Recursions
Objective: -

To understand the concept of Recursion and static keyword
Inputs: -

 Positive integer N
Sample execution: -

 
Test Case 1:
Enter the value of N : 7
Factorial of the given number is 5040

Test Case 2:
Enter the value of N : 5
Factorial of the given number is 120

Test case 3:
Enter the value of N : -1
Invalid Input

Test case 4:
Enter the value of N : 0

Factorial of the given number is 1
*/

#include <stdio.h>

int main()
{
    static int num;
    static unsigned long long int fact = 1;
    static char choice;
    static int flag = 0;
    
    if(flag == 0)
    {
        printf("Enter the value of N:");
        scanf("%d",&num);
    
        if(num < 0)
        {
            printf("Invalid Input\n");
            return 0;
        }
        
        flag = 1;
    }        
    
    if(num > 0)
    {
        fact *= num;
        num--;
        return main();
    }
    else if(num == 0 || fact != 1)
    {
        printf("Factorial of the given number is %lld\n",fact);
    }
    else if(num == 0 || fact == 1)
    {
        printf("Factorial of the given number is 1\n");
    }
    
    // printf("Do you want to continue: ");
    scanf(" %c",&choice);
    
    if(choice == 'Y' || choice == 'y')
    {
        fact = 1;
        flag = 0;
        return main();
    }
    
    return 0;
}