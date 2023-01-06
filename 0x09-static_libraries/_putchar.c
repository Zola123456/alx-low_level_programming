#include <unistd.h>
/**
 * _putchar _ writes the character c to stdout
 * @c: The chracter to print
 * Return: on success 1.
 * On error, -1 is returned, and erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
