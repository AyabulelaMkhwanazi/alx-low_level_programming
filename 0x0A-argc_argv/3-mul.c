#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Description - program multiples two numbers
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;
	int num;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[1]);
			num2 = atoi(argv[2]);
			mul = num * num2;
		}
		printf("%d\n", mul);
	}
	return (0);
}

