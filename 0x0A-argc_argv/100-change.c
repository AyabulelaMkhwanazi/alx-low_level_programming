#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Description - 
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int num, m, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2);
	{
		printf("%s\n","Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && num >= 0; m++)
	{
		while (num >= coins[m])
		{
			num -= coins[m];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
