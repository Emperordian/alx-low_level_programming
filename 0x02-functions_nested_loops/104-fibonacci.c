#include <stdio.h>

/**
 * main - Entry point
 *
 * To print the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (success)
 */
int main(void)
{
	int count = 3;
	long int a = 1, b = 2;
	long int next = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%lu\n", next);
		}
		else if (count < 98)
		{
			printf("%lu, ", next);
		}
		a = b;
		b = next;
		next = a + b;
		count++;
	}
	return (0);
}

