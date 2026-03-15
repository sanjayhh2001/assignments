#include <stdio.h>

/*
    Header file:
        <ctype.h>   (for original isalnum function)

    Function name:
        my_isalnum

    Description:
        my_isalnum() checks whether the given character is an alphanumeric character.

        Alphanumeric means the character is either:
        - Uppercase letter (A to Z)
        - Lowercase letter (a to z)
        - Digit (0 to 9)

    Prototype:
        int my_isalnum(int c);

    Parameter:
        int c  → character value passed as integer

    Return value:
        1  → if character is alphanumeric
        0  → if character is not alphanumeric

    Note:
        This function works similar to the standard library function
        isalnum() declared in <ctype.h>
*/

int my_isalnum(int c);

int my_isalnum(int c)
{
    if((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z')||(c >= '0' && c <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:\n");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    
    if(ret == 1)
    {
        printf("Entered character is alphanumeric character\n");
    }
    else
    {
         printf("Entered character is not alphanumeric character\n");
    }
    
    return 0;
}