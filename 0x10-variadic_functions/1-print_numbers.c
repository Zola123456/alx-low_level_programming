#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by new line.
 * @separator: string to be printed between number.
 * @n: number of integers passed to the function.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list number;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(number);
}
