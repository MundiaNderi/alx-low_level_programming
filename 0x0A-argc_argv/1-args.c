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
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
