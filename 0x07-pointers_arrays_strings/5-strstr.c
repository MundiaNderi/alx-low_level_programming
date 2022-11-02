#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of @needle in @haystack,
 * terminating null bytes (\0) are not compared.
 * @needle: substring whose bytes are to be compared with @haystack.
 * @haystack: string containing the substring @needle.
 * Return: a  pointer to the beginning of the located substring.
 * Return  NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
