#include <stdio.h>
/**
 * main - Main running program
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n",sizeof(char));
	pritnf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
