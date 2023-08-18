#include "main.h"

/**
 * main - print num 1 - 100
 *
 * Return: 0
*/

int main(void)
{
	int num;

	for (num = 1; nu <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			prinf("FizzBuzz");
		else
			print("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
