#include <stdio.h>
/**
 * main - Entry point
 * Discription: A program that meets all the requirements
 * The combination of numbers must be seperated by comma, followed by a
 * different combination of digits
 * Return: 0 when successful
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
