#include "main.h"

/**
 *_memcpy - function copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: num. of bytes
 *
 *Return: copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int i = n;

	for (; c < i; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
