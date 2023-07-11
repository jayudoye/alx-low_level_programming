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
	int fi, fx, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	fi = open(filename, O_WRONLY | O_APPEND);
	fx = write(fi, text_content, num);

	if (fi == -1 || fx == -1)
		return (-1);

	close(fi);

	return (1);
}
