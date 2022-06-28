#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size);
	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	ar[i] = '\0';
	return (ar);
}