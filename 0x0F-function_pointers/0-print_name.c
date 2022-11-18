#include "function_pointers.h"
/**
* print_name - prints a name
* @name: the name to print
* @f: the function to send the name to
* Return: Always 0 (Success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
