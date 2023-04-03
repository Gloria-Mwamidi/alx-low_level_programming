#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: pointer to the node
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
