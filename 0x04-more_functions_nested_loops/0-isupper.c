#include "main.h"
/**
 * _isupper - A function that checks for uppercase character
 *
 * @c: The parameter to be checked
 *
 * Return: 1 for uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
