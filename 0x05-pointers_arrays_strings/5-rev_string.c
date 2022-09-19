#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the pointer to the string
 */
void rev_string(char *s)
{
	char tmp;
	int j;
	int len = 0;
	int len2 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len2 = len - 1;

	for (j = 0; j < len / 2; j++)
	{
		tmp = s[j];
		s[j] = s[len2];
		s[len2--] = tmp;
	}
}
