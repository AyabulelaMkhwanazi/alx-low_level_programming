#include <stdio.h>

/**
 * main - Entry point
 * Description - Print number from 1 to 100
 * for multiples of 3 print Fizz
 * for multiples of 5 print Buzz
 * Return: 0 (success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
