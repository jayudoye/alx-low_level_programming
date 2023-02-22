#include "main.h"

/**
 * print_alphabet - function that prints alphabets in lower case
 *
 * Return: 0 although is void
 *
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
