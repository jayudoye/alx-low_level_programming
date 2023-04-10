#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number
 *
 * @n: number to print in binary
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int x, count = 0;

	for (x = 63; x >= 0; x--)
	{
		num = n >> x;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
