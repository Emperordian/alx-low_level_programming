#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * main: the entry point to the program
 *
 * Return: generated password
 */
int main(void)
{
	char c;
	int n;

	srand(time(0));
	while (n <= 2645)
	{
		c = rand() % 128;
		n = +c;
		putchar(c);
	}
	putchar(2772 - n);

	return (0);
}
