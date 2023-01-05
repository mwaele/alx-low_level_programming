#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of ints
 * using Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	do {
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
			break;
	} while (array[prev] < value);
	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
	prev = prev - step;
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == size)
			return (-1);
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
