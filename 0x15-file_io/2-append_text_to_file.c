#include "main.h"

/**
 * append_text_to_file - main
 * @filename: char
 * @text_content: char
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, r, w;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
	{
		return (-1);
	}
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
