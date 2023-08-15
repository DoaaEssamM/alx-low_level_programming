#include "main.h"

/**
 * print_alphabet - print a - z by _putchar fun.
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
