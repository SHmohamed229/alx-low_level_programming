#include "lists.h"

/**
 * dlistint_len - this for return num of element in a linked dlistint_t list.
 * @h: for  pointer to the list.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
