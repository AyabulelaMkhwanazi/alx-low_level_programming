#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - resets pointer to 98
 * @n - pointer to reset
 */

void reset_to_98(int *n)
{
	*n = 98;

	printf("%d\n", *n);
}
