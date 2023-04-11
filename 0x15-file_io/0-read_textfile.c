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
	char *tuff;
	ssize_t rk;
	ssize_t x;
	ssize_t y;

	rk = open(filename, O_RDONLY);
	if (rk == -1)
		return (0);
	tuff = malloc(sizeof(char) * letters);
	y = read(rk, tuff, letters);
	x = write(STDOUT_FILENO, tuff, y);

	free(tuff);
	close(rk);
	return (x);
}
