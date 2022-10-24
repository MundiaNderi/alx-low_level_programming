#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle to be printed
*/
void print_triangle(int size)
{
	int size;

	if (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= 9 j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
