#include "palindrome.h"

/**
 * is_palindrome - checks if a number is a palindrome
 * @n: the number to check
 * Return: 1 if n is palindrome 0 otherwise
 */
int is_palindrome(unsigned long n)
{
    int palindrome[100];
    int i, ii, endOfnbr;
    
    for (i = 0; n; i++)
    {
        palindrome[i] = n % 10;
        n = n / 10;
    }
    /* As i increment I have to subtract 1 to stand at the end of the array */
    endOfnbr = i - 1;
    for (ii = 0; ii < (endOfnbr / 2); ii++)
        {
        if (palindrome[ii] != palindrome[endOfnbr -ii])
                return (0);
        }
    return (1);        
}