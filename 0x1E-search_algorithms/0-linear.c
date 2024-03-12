#include "search_algos.h"

/**
 * linear_search - Search for a value in array
 *                 of int using linear search.
 * @array: A pointer to the 1st element of the array to search.
 * @size: The num of elements in the array.
 * @value: value to search for.
 *
 * Return: NULL - If the value is not present or the array, -1.
 *         Otherwise, the first index where the value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* If the value is found */
		if (array[i] == value)

			/* Return the index of the value */
			return (i);
	}

	/* Value not found, return -1 */
	return (-1);
}
