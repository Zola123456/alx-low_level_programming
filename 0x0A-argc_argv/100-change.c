#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints coints left
 * @argc: Paramater Entry
 * @argv: One number of arguments
 * Return: Zero onone number of argumetsr
 */

int main(int argc, char *argv[])
{
	int C, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	C = atoi(argv[1]);
	if (C < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; C >= 0;)
	{
		if (C >= 25)
			C -= 25;

		else if (C >= 10)
			C -= 10;

		else if (C >= 5)
			C -= 5;

		else if (C >= 2)
			C -= 2;

		else if (C >= 1)
			C -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
