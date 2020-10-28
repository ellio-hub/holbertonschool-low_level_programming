#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - print a character.
 *
 * @l: list of argements.
 */
void print_char(va_list l)
{
	printf("%c", va_arg(l, int));
}
/**
 * print_integer - print an integer.
 *
 * @l: list of argements.
 */
void print_integer(va_list l)
{
	printf("%i", va_arg(l, int));
}
/**
 * print_float - print a float.
 *
 * @l: list of argements.
 */
void print_float(va_list l)
{
	printf("%f", va_arg(l, double));
}
/**
 * print_string - print a string.
 *
 * @l: list of argements.
 */
void print_string(va_list l)
{
	char *s;

	s = va_arg(l, char *);
	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - print anything
 * @format : list of the format of the variables to print
 * Return: 0
 */
void print_all(const char * const format, ...)
{
va_list listt;
int i = 0, j;
char f[] = "cifs", *sep = "";
void (*fun_ptr_arr[])(va_list) = {print_char, print_integer,
print_float, print_string};
va_start(listt, format);
while (format && format[i] != '\0')
{
j = 0;
while (f[j] != '\0')
{
if (f[j] == format[i])
{
printf("%s", sep);
(*fun_ptr_arr[j])(listt);
sep = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(listt);
}
