#include "main.h"

/**
 * flip_bits - count the num of bits to change
 * to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: num of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int current;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = ex >> i;
		if (current & 1)
			counter++;
	}

	return (counter);
}
