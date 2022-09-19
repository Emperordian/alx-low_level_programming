#include "main.h"

/**
 * puts2 - prints out one of first two characters of a string
 * followed by a new line
 * @str: the string to be checked
 */
void puts2(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		b = a;
		while (b % 2 == 0)
		{
			_putchar(str[a]);
			b++;
		}
		a++;
	}

	_putchar('\n');
}
