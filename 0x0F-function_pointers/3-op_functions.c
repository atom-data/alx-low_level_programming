#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first integer input
 * @b: second integer input
 *
 * Return: sum of inputs
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two integers
 * @a: first integer input
 * @b: second integer input
 *
 * Return: difference between the inputs
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two integers
 * @a: first integer input
 * @b: second integer input
 *
 * Return: product of the inputs
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotient between two numbers
 * @a: first integer input
 * @b: second integer input
 *
 * Return: quotient of the two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division
 * @a: first integer input
 * @b: second integer input
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
