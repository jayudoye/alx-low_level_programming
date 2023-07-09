#include "main.h"

/**
 * get_endianness - A function that checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c = (char *)&x;

	x = 1;

	if (*c)
		return (1);
	return (0);
}
