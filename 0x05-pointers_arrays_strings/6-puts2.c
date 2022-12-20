#include "main.h"
/**
 * puts2 - prints very other character in string.
 * @str: pointer to string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	putchar(str[0]);
	putchar('\n');
	for (int i = 2; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
		putchar('\n');
	}
}
