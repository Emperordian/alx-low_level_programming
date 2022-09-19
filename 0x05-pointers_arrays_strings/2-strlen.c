#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string pointer under consideration
 *
 * Return: 1 (success). 0 otherwise.
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
