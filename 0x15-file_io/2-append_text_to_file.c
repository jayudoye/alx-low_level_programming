#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, x, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	x = write(i, text_content, num);

	if (i == -1 || x == -1)
		return (-1);

	close(i);

	return (1);
}