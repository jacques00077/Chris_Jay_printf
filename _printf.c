#include "main.h"
/**
 * _printf - print output to stdout
 *
 * @format: conversion specifier
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	unsigned int x, s_count, count = 0;

	va_list lists;

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(lists, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			pchar(format[x]);
		}
		else if (format[x] == '%' && format[x + 1] == 'c')
		{
			pchar(va_arg(lists, int));
			x++;
			count += (s_count - 1);
		}
		else if (format[x + 1] == 's')
		{
			s_count = putssss(va_arg(lists, char *));
			x++;
		}
		else if (format[x + 1] == '%')
		{
			pchar('%');
		}
		count += 1;
	}
	va_end(lists);

	return (count);
}
