#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t sum;
	ssize_t num;
	ssize_t x;

	sum = open(filename, O_RDONLY);
	if (sum == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	x = read(sum, str, letters);
	num = write(STDOUT_FILENO, str, x);

	free(str);
	close(sum);
	return (num);
}
