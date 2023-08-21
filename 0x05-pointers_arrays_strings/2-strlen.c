#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
	int lengthi = 0;

	while (*s != '\0')
	{
		lengthi++;
		s++;
	}

	return (lengthi);
}
