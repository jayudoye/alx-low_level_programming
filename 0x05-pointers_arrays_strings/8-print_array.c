#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers
 * followed by a new line
 *
 * @a: Array name
 * @n: The number of Ekements of the array to be printed
 *
 * Return: Inputs of a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d,", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}

