#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: Number of bytes to be filled starting from *s to be filled.
 * @s: starting address of the memory to be filled
 * @b: constant byte, value to be filled.
 * Return: a pointer to the memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
