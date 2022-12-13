#include "main.h"

/**
 * print_aphabet - Entry point
 *
 * Return: Always 0 (success)
 */

void print_aphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
	return (0);
}
