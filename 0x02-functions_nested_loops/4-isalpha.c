#include "main.h"

/**
 * _islower - checks for alphabetic character 
 * @c: takes in a character
 * Return: 1 if lowercase, letter, uppercase; 0 otherwise
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
