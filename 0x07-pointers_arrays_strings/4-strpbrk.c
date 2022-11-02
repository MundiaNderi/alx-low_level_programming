#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: locate the first occurence of the bytes in the string @accept
 * @accept: contains bytes to be comapred to bytes in string @s.
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * Return NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
