#include "lists.h"
#include <stdio.h>

/**
  * free_listp - free a linked list
  * @head: head of a list in to linked list
  *
  * Return: no return
*/
void free_listp(listp_t **head)
{
	listp_t *temp;
	lestp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
  * print_listint_safe - print an elements in a linked list
  * @head: head of a list
  *
  * Return: num of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);
		new->i = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->i)
			{
				printf("-> [%i] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}
		printf("[%i] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&hptr);
	return (nnodes);
}
