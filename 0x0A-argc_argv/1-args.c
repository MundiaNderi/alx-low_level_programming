#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments, followed by a new line.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int c;
	(void)argv;

	for (c = 0; c <= argc; c++)
	;
	{}
	printf("%d\n", c - 2);

	return (0);
}
