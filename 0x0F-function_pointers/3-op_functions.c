#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds number
 * @a: num1
 * @b: num2
 * Return: what is needed
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts numbers
 * @a: num1
 * @b: num2
 * Return: what is needed
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies numbers
 * @a: num1
 * @b: num2
 * Return: what is needed
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - numbers
 * @a: num1
 * @b: num2
 * Return: what is needed
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of numbers
 * @a: num1
 * @b: num2
 * Return: 0
 */

int op_mod(int a, int b)
{
	return (a % b);
}
