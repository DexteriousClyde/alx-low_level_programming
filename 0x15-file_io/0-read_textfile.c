#include "main.h"

/**
 * read_textfile - main
 * @filename: char
 * @letter: size_t
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r, w;
	char *buffer;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	r = read(file, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';
	close(file);
	w = write(STDOUT_FILENO, buffer, r);
	if (w < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (w);
}
