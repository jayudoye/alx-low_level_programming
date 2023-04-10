#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 *
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
