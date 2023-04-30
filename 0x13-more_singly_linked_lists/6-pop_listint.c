#include "lists.h"

/**
  * pop_listint - delete the head node of a linked list
  * @head: pointer to thr First element in the linked list
  * Return: the data inside the element that was delet
  * or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
