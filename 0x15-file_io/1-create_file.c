#include "main.h"

/**
 * create_file - A function that creates a file
 *
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 if it is successful and -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int rk, x, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	rk = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(rk, text_content, num);

	if (rk == -1 || x == -1)
		return (-1);

	close(rk);

	return (1);
}
