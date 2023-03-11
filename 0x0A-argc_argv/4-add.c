#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Desciption - program adds positive numbers
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i,j;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc < 0)
	{
		printf("0\n");
	}
	return (0);
}
