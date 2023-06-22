#include "3-calc.h"
#include "function_pointers.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b.
 *
 * @a: first integer.
 * @b: second integer.
 *
 * Return: sum.
 */
int op_add(int a, int b)
{
	int sum = a + b;
	return (sum);
}

/**
 * op_sub - returns the difference of a and b.
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: dif.
 */
int op_sub(int a, int b)
{
	int dif = a - b;
	return (dif);
}

/**
 * op_mul - returns the product of a and b.
 *
 * @a: first integer.
 * @b: second integer.
 *
 * Return: prd.
 */
int op_mul(int a, int b)
{
	int prd = a * b;
	return (prd);
}

/**
 * op_div - returns the result of the
 * division of a by b.
 *
 * @a: first integer.
 * @b: second integer.
 *
 * Return: dvs.
 */
int op_div(int a, int b)
{
	int dvs = a / b;
	return (dvs);
}

/**
 * op_mod - returns the remainder
 * of the division of a by b.
 *
 * @a: first integer.
 * @b: second integer.
 *
 * Return: mdl.
 */

int op_mod(int a, int b)
{
	int mdl = a % b;
	return (mdl);
}
