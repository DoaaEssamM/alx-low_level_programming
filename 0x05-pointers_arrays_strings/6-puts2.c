#include "main.h"

/**
 * puts2 - fun print every other char of a string
 * @string: input
 * Return: print char
*/

void puts2(char *string)
{
	int longi = 0;
	int a = 0;
	char *y = string;
	int b;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	a = longi - 1;
	for (b = 0 ; b <= a ; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(string[b]);
	}
	}
	_putchar('\n');
}
