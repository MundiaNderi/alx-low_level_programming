#include <stddef.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @size: number of elements in @array.
* @array: pointer to array.
* @cmp: pointer to function used to compare values.
* Return: the index of the first element for which the cmp function
* does not Return 0. If no element matches, Return -1.
* If size <= 0, Return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*p)(int);

	p = cmp;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (p(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
