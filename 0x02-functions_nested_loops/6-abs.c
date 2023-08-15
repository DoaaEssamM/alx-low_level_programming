#include "main.h"

/**
 * _abs - fun. compute the absolute value of an int
 *
 * @n: take fun input
 *
 * Return: 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
