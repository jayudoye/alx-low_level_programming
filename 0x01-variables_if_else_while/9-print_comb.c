#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 when successful
 */

int main(void)
{
	int g;

	for (g = 0; g < 10; g++)
	{
		putchar(g);
		if (g != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
