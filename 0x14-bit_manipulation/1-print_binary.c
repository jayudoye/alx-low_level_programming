#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Number to print binary representation
 */
void print_binary(unsigned long int n)
{
	int count = 63, start = 0;
	unsigned long int num = 1;

	while (count >= 0)
	{
		if (n & (num << count))
		{
			_putchar('1');
			start = 1;
		}
		else if ((!(n & (num << count)) && start == 1) || count == 0)
		{
			_putchar('0');
		}
		count--;
	}
}
