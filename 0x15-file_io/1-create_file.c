#include "main.h"

/**
 * create_file - main
 * @filename: char
 * @text_content: char
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int file, r, w;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (r = 0; text_content[r]; r++)
			;
		w = write(file, text_content, r);
		if (w != r)
			return (-1);
	}
	close(file);
	return (1);
}
