#include "main.h"

/**
 * _printf - prints characters.
 * @format: the format string.
 *
 * Return: the number of printer characters.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int value = 0;

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		value++;
		i++;
	}
	return (value);
}
