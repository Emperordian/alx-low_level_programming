#include <stdio.h>

/**
 * main - a function that prints its name
 * @agrc: agrument counter
 * @agrv: agrument vector
 *
 * return: 0 for  success
 */
int main(int argc __attribute__((unused)), char *agrv[])
{
	printf("%s\n", *argv);

	return (0);
}
