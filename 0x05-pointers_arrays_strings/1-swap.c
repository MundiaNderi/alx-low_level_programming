#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
*/
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
