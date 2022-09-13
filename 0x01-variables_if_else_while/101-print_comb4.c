#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 3 digits.
 *
 * Return: 0 always when successful
 */
int main(void)
{
	int c = 0;
	int f;
	int m;
	int l;

	while (c <= 999)
	{
		f = (c / 100 + '0');
		m = (c / 10 % 10 + '0');
		l = (c % 10 + '0');

		if ((f < m) && (m < l))
		{
			putchar(f);
			putchar(m);
			putchar(l);

			if (c != 999)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
