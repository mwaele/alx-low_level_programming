#include "search_algos.h"
/**
 * linear_search - algorithm implementation: searches for a value
 * in an array of integers.
 * @array: pointer to the first elemen of the array to search in.
 * @size: size of the number of elements in array
 * @value: value to search for in array
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
