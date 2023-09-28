#include "main.h"

/**
 * get_bit - returns the value of a bit at index in a decimal number
 * @n: num to search
 * @index: index of the bit num
 *
 * Return: value of the bit num
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);

