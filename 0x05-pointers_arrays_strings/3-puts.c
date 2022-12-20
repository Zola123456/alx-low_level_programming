#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my imput string
 *
 */

void _puts(char *str)
{
	int inddex;

	for (index = 0; str[index] != '\0' ; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
