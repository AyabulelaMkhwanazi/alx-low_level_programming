#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Description - program that prints the number of arguments passed into it
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
