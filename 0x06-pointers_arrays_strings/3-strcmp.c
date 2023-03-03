#include "main.h"

/**
 * _strcmp - A function that compares two strings
 *
 * @s1: Input value
 * @s2: Input value
 *
 * Return: 0 when successful
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
