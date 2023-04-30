#include "lists.h"

/**
  * get_nodeint_at_index - returns the node at a certain index in a linked list
  * @head: First node in the linked list
  * @index: index of the node to return
  * Return: pointer to the node where looking for, OR NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	return (temp ? temp : NULL);
}
