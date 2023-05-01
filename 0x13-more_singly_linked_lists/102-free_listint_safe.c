#include "lists.h"

/**
  * free_listin_safe - free linked list
  * @h: poiner first node
  *
  * Return: num of element free kist
*/
size_t free_listint_safe(listint_t **h)
{
	size_t les = 0;
	int diffe;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diffe = *h - (*h)->next;
		if (diffe > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			les++;
		}
		else
		{
			free(*h);
			*h = NULL;
			les++;
			break;
		}
	}
	*h = NULL;
	return (les);
}
