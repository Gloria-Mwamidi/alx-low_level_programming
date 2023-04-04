#include "lists.h"

/**
* free_listint_safe - a function the frees a listint_t list
* @h: pointer to the node
*
* Return:  the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *next_node;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	return (0);

	tmp = *h;
	while (tmp != NULL)
	{
		count++;
		next_node = tmp->next;
		free(tmp);
		tmp = next_node;
	}
	*h = NULL;
	return (count);
}

