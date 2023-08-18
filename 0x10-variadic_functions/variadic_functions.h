#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_func - struct print_func
 *
 * @type: type character for the function
 * @func: function pointer to execute/print type
 */
typedef struct print_func
{
	char type;
	void (*func)(va_list);
} print_func_t;

#endif
