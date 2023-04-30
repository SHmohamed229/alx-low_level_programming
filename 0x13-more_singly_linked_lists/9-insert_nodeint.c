#include "lists.h"

/**
  * insert_nodeint_at_index - insert a new node in a linked list
  * at a given position
  * @head: pointer to the First node in the list
  * @idx: index where the new node is add
  * @n: data to insert in the new node
  * Return: pointer to insert in the new node, Or NULL.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (y = 0; temp && y < idx; y++)
	{
		if (y == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
