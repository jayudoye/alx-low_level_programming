#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 *
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 if successful, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	*n &= ~(i << index);
	return (1);
}
