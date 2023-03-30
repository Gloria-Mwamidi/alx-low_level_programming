#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: The list_t list
 *
 * Return: the number of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
