#include "main.h"

/**
 * string_toupper - main code
 * @str: pointer
 * Return: char
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (i == 0 || (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == '\t' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}'))
		{
			j = 1;
		}
		if(str[i] >= 'a' && str[i] <= 'z' && j == 1)
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}
