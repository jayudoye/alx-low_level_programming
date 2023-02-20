#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 if successful
 */

int main(void)
{
	char j;

	char p;

	j = 'a';
	p = 'A';

	while
		(j <= 'z') {
			putchar(j);
			j++;
		}
	while
		(p <= 'Z') {
			putchar(p);
			p++;
		}
	putchar('\n');
	return(0);
}
