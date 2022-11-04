#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: integer to return the factorial of.
 * Return: -1 if n is lower than 0.
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
}
