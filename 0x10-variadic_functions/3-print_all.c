#include "variadic_functions.h"

/**
 * print_func - struct print_func
 *
 * @type: type character for the function
 * @func: pointer to function to execute/print the type
 */
typedef struct print_func
{
	char type;
	void (*func)(va_list);
} print_func_t;

/**
 * print_char - function prints char types
 *
 * Return: nothing.
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - function prints int types
 *
 * Return: nothing.
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);
	printf("%d", i);
}

/**
 * print_flt - function prints float types
 *
 * Return: nothing
 */
void print_flt(va_list args)
{
	float f = va_arg(args, double);
	printf("%f", f);
}

/**
 * print_str - function prints strings
 *
 * Return: nothing.
 */
void print_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - function prints anything
 *
 * @format: the list of types of arguments passed to the function
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	print_func_t print_funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_flt},
		{'s', print_str},
	};
	int i = 0;
	int j;
	char *separator = " ";

	while (format[i])
	{
		for (j = 0; j < 4; j++)
		{
			if (format[i] == print_funcs[j].type)
			{
				printf("%s", separator);

				print_funcs[j].func(args);
				separator = ", ";
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
