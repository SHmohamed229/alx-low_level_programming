#include "search_algos.h"
/**
 * linear_search - this method for search lnear form in array for element
 * @array: for array list
 * @size: for size of the array
 * @value: this value of the array
 *
 * Return: the Index where user look for
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	} return (-1);
}
