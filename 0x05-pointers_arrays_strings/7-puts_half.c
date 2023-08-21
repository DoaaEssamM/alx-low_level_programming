#include "main.h"

/**
 * puts_half - fun prints half of a str followed by new line
 *
 * @str: input
 * Return: half of input
*/

void puts_half(char *str)
{
	int a, n, lni;

	lni = 0;

	for (a = 0; str[a] != '\0'; a++)
		lni++;

	n = (lni / 2);

	if ((lni % 2) == 1)
		n = ((lni + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
