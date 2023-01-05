#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int mid, left, i = 0, right = size - 1;

	while (array && bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (array && bound < size)
	{
		left = bound / 2;
		right = bound;
		printf("Value found between indexes [%d] and [%d]\n", left, right);
	}
	else if (array)
	{
		left = bound / 2;
		right = size - 1;
		printf("Value found between indexes [%d] and [%d]\n", left, right);
	}
	while (array && left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);

}
