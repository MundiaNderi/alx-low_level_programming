#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: bytes to be copied from memory area src.
 * @src: memory area to copy n bytes from.
 * @dest: destination memory area for n bytes copied from @src.
 * Return: a pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
