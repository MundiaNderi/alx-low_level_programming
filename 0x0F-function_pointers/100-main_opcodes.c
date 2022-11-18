#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point.
* Description: A program that prints the opcodes
* of its own main function
* Usage: ./main number_of_bytes
* @argc: argument counter
* @argv: argument vector
* Return: Always successful
*/
int main(int argc, char *argv[])
{
	int index, nbytes;
	char *ptr = (char *) main;

	if (argc != 1)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < nbytes; index++)
	{
		printf("%02x", ptr[index] & 0xFF);
		if (index != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
