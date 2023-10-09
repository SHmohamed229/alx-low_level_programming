#include "search_algos.h"

/**
 * print_array - this method Prints for array of ints, separated with commas
 *
 * @array: this  Pointer to the array to print
 * @first: this  first index to print
 * @last: this last index to print
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * ex_binary_search - this method searches for a value in an array of integers
 *
 * @array: this pointer to the first element of the array to search in
 * @size: this num of elements in array
 * @value: this value to search for
 * @start: this first index to look inside
 *
 * Return: Index where value is located or -1 on failure or not found
 */

int ex_binary_search(int *array, size_t size, int value, size_t start)
{
	size_t i = 0, first = start, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			i = (first + last) / 2; /* Gets the middle value */

			if (value > array[i]) /* Uses the right part of array */
				first = i + 1;
			else if (value < array[i]) /* Uses the left part of array */
				last = i - 1;
			else
				return (i);
		}
	}

	return (-1);
}

/**
 * exponential_search - this method searche for a value in an array of integers
 *
 * @array: this pointer to the first element of the array to search in
 * @size: this num of elements in array
 * @value: this value to search for
 *
 * Return: Index where value is located or -1 on failure or not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array)
	{
		while (i < size && array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;
		}

		i = i > size - 1 ? size : i + 1;
		printf("Value found between indexes [%lu] and [%lu]\n", i / 2, i - 1);
		return (ex_binary_search(array, i, value, i / 2));
	}

	return (-1);
}
