#include "main.h"

/** 
 * _strcpy - main code
 * @dest: pointer
 * @src: pointer
 * Return: cpy
 */

char *_strcpy(char *dest, char *src)

{

		int i;

		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
}
