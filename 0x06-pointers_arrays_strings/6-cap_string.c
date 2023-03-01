#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @n : character to use 
 */

char *cap_string(char *b)
{
	int c = 0;

	while (b[c] != '\0')
	{
		while (!(b[c] >= 'a' && b[c] <= 'z')
				c++;

			if (b[c - 1] == ' ' || 
			(b[c - 1] == '\t' || 
			(b[c - 1] == '\n' || 
			(b[c - 1] == ',' || 
			(b[c - 1] == ';' || 
			(b[c - 1] == '.' ||
			(b[c - 1] == '!' || 


	}

}
