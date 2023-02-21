#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always returns 0 when successful
 */

int main(void)
{
	char p;

	for (p = 'z'; p >= 'a'; p--)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
