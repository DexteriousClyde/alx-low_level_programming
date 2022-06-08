#include "main.h"

/**
 * _isalpha - main code
 * @c : int input
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	return ((c > 96 && c < 123) || (c > 64 && c < 91));
}
