#include "variadic_functions.h"

/**
 * print_char - function prints char types
 *
 * @args: va_list name
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
 * @args: va_list name
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
 * @args: va_list name
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
 * @args: va_list name;
 *
 * Return: nothing.
 */
void print_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
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

	char *separator = " ";

	print_func_t print_funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_flt},
		{'s', print_str},
	};
	int i = 0;
	int j;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == print_funcs[j].type)
			{
				printf("%s", separator);

				print_funcs[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
