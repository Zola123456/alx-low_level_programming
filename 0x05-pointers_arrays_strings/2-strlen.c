#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string
 *
 * @s: this is the imput string
 *
 * Return: lenngth of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
