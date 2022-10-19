#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: 0
*/
int main(void)
{
	int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (j != 2036501104)
		{
			printf("%lu, ", j);
		} else
		{
			printf("%dlu\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
