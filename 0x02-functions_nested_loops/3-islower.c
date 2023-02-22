#include "main.h"
/**
 * _islower - Function to print lower case alphabets
 *
 * @c: parameter to be printed
 *
 * Return: 1 if it is lower case
 * 0 if it is not
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
