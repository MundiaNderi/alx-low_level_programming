#include <stdio.h>

/**
* add - returns the addition of two integers.
* @a: integer to be added to @b.
* @b: integer to be added to @c.
* Return: the sum of @a and @b.
*/
int add(int a, int b)
{
	return (a + b);
}

/**
* sub - returns the subtraction of two integers.
* @a: integer to subtract @b from.
* @b: integer to be subtracted from @a.
* Return: the difference of a and b.
*/
int sub(int a, int b)
{
	return (a - b);
}


/**
* mul - returns the multiplication of two integers.
* @a: integer to be multiplied by @b.
* @b: integer to be multiplied by @a.
* Return: the result of multiplication.
*/
int mul(int a, int b)
{
	return (a * b);
}


/**
* div - returns the division of two integers.
* @a: the integer to be divided by @b.
* @b: the divisor of @a.
* Return: the result of the division.
*/
int div(int a, int b)
{
	return (a / b);
}

/**
* mod - returns the modulus of two integers.
* @a: the dividend of @b
* @b: the divisor of @a
* Return: the remainder of the division.
*/
int mod(int a, int b)
{
	return (a % b);
}
