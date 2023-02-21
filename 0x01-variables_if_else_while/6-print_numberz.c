#include <stdio.h>

/**
 * main - entry point
 * Discription: A program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line using putchar
 * Return: Always 0 when successful
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
