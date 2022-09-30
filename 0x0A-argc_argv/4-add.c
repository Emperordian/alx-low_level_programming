#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 47 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
