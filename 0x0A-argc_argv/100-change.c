#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins;

	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins = 0;

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}


	int size = sizeof(denominations) / sizeof(int);

	for (i = 0; i < size; i++)
	{
		coins += cents / denominations[i];
		cents = cents % denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}