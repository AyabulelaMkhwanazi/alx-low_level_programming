#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int i, int length);
/**
 * is_palindrome - checks for a palindrome.
 * @s: the string
 * Return: 1, else 0.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, 0, _strlen_recursion(s)));
	}
}

/**
 * _strlen_recursion - function returns the length of a string.
 * @s: the string.
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length++;
		return (length += _strlen_recursion(s + 1));
	}
}

/**
 * check_palindrome - checks characters recursively for a palindrome.
 * @s: the string.
 * @i: iterator.
 * @length: the length of a string.
 * Return: 1 if palindrome, else 0.
 */

int check_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	else if (i >= length)
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, i + 1, length - 1));
	}
}
