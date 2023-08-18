#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: triangle size
 *
 * Return : 0
*/

void print_triangle(int size)
{
	int hight, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hight = 1; hight <= size; ight++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hight + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
