#include <stdio.h>

/**
 * main - a function that prints its name
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
