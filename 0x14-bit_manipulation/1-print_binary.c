#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number.
*/
void print_binary(unsigned int n)
{
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

    while (mask > 0) {
        if ((n & mask) == 0) {
            _putchar('0');
        } else {
            _putchar('1');
        }

        mask >>= 1;
    }
}
