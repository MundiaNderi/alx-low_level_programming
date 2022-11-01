#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: the character to be located.
 * @s: the string containing the character @c.
 * Return: a pointer to the first occurence of the character c,
 * in the string @s. Return NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);


	return (NULL);
}
