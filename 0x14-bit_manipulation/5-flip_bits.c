#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		a = b >> x;
		if (a & 1)
			num++;
	}

	return (num);
}
