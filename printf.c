#include "main.h"
/**
 * printf - produces output according to a format
 * @c: the character
 * @format: a character string
 *
 * Return: number of the character printed
 */
int _printf(const char *format,...)
{
	va_list args;
	int i, c, n;
	char *s;
	i = 0;
	n = 0;

	va_start(args, int);
	c = va_args(args,int);
	printf("%d"; c);
	return (1);
	va_end(args);
}
