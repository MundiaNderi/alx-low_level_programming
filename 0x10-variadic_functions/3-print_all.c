#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_char - prints the char character.
* @arg: a list of argument pointing to the
* character to be printed
* Return: nothing
*/
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}
/**
* print_int - prints the int
* @arg: a list of argument pointing
* to the character to be printed
* Return: nothing
*/
void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}
/**
* print_float - prints the float
* @arg: a list of argument pointing to the character to
* be printed
* Return: nothing
*/
void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}
/**
* print_string - prints the string.
* @arg: a list of argument pointing to the character to be
* printed
* Return: nothing.
*/
void print_string(va_list arg)
{
	char *str = var_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
/**
* print_all - prints anything
* @format: list of types of arguments passed to function.
* Description: if any argument is not of type char, int, float or char *
* is ignored
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		/**
		* 4 equals to the number of funcs present
		* so if h is less than for and our current
		* format is not equal to format in funcs
		* then j becomes j + 1
		*/
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
