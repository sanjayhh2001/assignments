// A1 - WAP to find the middle number (by value) of given 3 numbers


/*
Description : 

you should read three intergers from user and find the middle number 

Sample Execution : 

Test case 1 : 

Enter the Three numbers : 10 20 30

The middle number is 20

Test case 2 :


Enter the Three numbers : 43 10 25

The middle number is 25
*/


#include <stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Enter three number: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1 > num2)
    {
        if(num1 < num3)
        {
            printf("The middle number is %d\n", num1);
        }
        else
        {
            if(num2 < num3)
            {
                printf("The middle number is %d\n", num2);
            }
            else
            {
                printf("The middle number is %d\n", num3);
            }
        }
    }
    else
    {
        if(num1 > num3)
        {
            printf("The middle number is %d\n", num1);
        }
        else
        {
            if(num2 > num3)
            {
                printf("The middle number is %d\n", num2);
            }
            else
            {
                printf("The middle number is %d\n", num3);
            }
        }
    }
    
    return 0;
}