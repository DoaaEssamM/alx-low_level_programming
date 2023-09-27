#include "main.h"

/**
 * rev_string - reverse array
 * @n: int prams
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int k = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (k = 0; k < i; k++, i--)
	{
		temp = *(n + k);
		*(n + k) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers
 * @n1: text for 1st number to add
 * @n2: text for 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to call function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, dig = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (dig >= (size_r - 1))
			return (0);
		*(r + dig) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (dig == size_r)
		return (0);
	*(r + dig) = '\0';
	rev_string(r);
	return (r);
}
