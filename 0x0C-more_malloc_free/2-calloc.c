#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_calloc - allocates memory for an array, using malloc.
* @nmemb: int
* @size: int
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(size * nmemb);
	if (x == NULL)

	return (NULL);
		for (i = 0; i < nmemb * size; i++)
		{
			x[i] = '\0';
		}
		return (x);
}
