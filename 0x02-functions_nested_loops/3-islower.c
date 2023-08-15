#include"main.h"

/**
 * _islower - function to check if character c is lowercase
 *
 * @c: check fun. input
 *
 * Return : 1 if `c` is lowercase
 * else 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
