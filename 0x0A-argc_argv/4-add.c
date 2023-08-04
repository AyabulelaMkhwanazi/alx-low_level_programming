#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Describe: Program adds positive numbers
 *
 * @argc: argument count (number of arguments passed into the program)
 * @argv: argument vector (array of arguments passed into the program)
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		char *alpha = argv[i];

		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (alpha[j] < '0' || alpha[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(alpha);
	}
	printf("%d\n", sum);

	return (0);
}
