#include "main.h"
#include <stdio.h>

/**
 *  main - multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if it works, 1 if there's an error.
*/
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%i\n", product);

	return (0);
}
