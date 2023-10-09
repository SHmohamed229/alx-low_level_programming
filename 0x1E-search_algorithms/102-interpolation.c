#include "search_algos.h"

/**
 * interpolation_search - this method searches for value in an array of integers
 *
 * @array: this pointer to the first element of the array to search in
 * @size: this num of elements in array
 * @value: this value to search for
 *
 * Return:  First where value is located or -1 on failure or not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0, low = 0, high = size - 1;

	if (array)
	{
		while ((value >= array[low]))
		{
			i = low + (((double)(high - low) /
						(array[high] - array[low])) * (value - array[low]));

			if (i > size)
			{
				printf("Value checked array[%lu] is out of range\n", i);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			if (array[i] < value)
				low = i + 1;
			else if (array[i] > value)
				high = i - 1;
			else
				return (i);
		}
	}

	return (-1);
}
