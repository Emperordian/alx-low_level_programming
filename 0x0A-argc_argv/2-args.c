#include <stdio.h>

/**
 * main - enrty point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
