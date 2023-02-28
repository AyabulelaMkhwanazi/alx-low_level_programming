#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: String to print
 */

void puts2(char *str)
{
	for (count = 0; str[count] != '\n'; count++)
	{
		if ((count % 2) == 0)
			_putchar(str[count]);
		else
			continue;
	}
	_putchar('\n');
}
