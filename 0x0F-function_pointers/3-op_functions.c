#include "3-calc.h"

/**
 * This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 *
 * op_add - calculates sum of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: the sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference
 * @a: first integer
 * @b: second integer
 * Return: the difference of @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calcultes product
 * @a: first integer
 * @b: second integer
 * Return: the product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div: calculates result of dividion
 * @a: first integer
 * @b: second integer
 * Return: the result of the division of @a by @b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of division
 * @a: first interger
 * @b: second integer
 * Return: the remainder of the division of @a by @b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
