#include "lists.h"

/**
  * listint_len - count the number of elements in a linked lists
  * @h: linked list of type listint_t to traverse
  *
  * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t number = 0;

	while (cursor != NULL)
	{
		number += 1;
		cursor = cursor->next;
	}
	return (number);
}
