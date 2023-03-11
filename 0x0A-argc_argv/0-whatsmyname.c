#include <stdio.h>

/**
 * main - Entry point
 * @arg: argument count
 * @argv: argument vector
 * Description - programming prints its name followed by a new line
 * Return: 0 (success)
 */

int main(int arg __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
