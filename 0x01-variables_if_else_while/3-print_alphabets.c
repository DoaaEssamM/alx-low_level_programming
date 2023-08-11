#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lower and uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		c++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		c++;
	}
	putchar('\n');

	return (0);
}
