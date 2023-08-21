#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: string
 * return: 0
*/

void print_rev(char *str)
{
	int longi = 0;
	int r;

	while (*str != '\0')
	{
		longi++;
		str++;
	}
	str--;
	for (r = longi; r > 0; r--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
