#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src
 *
 * @dest: Copy to
 * @src: copy from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int y;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
