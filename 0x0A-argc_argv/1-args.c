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
	int i;
	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
