#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);
	int coins = 0;

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	int denominations[] = {25, 10, 5, 2, 1};

	int size = sizeof(denominations) / sizeof(int);

	for (i = 0; i < size; i++)
	{
		coins += cents / denominations[i];
		cents = cents % denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}