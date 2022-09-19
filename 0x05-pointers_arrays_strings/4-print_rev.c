#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: the string under consideration
 */
void print_rev(char *s)
{
	int p, k, length;

	if (s[0] == '\0')
		_putchar('\0');
	else
	for (p = 0; s[p] != '\0'; p++)
		length = p;

	for (k = length; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
