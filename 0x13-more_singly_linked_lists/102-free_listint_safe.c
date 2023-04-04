#include "lists.h"

/**
 * loop_listint_count - a function that counts the number of nodes
 * @head: a pointer to the node
 *
 * Return: the number of nodes on success and 0 on failure
 */
size_t loop_listint_count(const listint_t *head)
{
	const listint_t *first, *last;
	size_t len = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	last = (head->next)->next;

	while (last)
	{
		if (first == last)
		{
			first = head;
			while (first != last)
			{
				len++;
				first = first->next;
				last = last->next;
			}

			first = first->next;
			while (first != last)
			{
				len++;
				first = first->next;
			}

			return (len);
		}

		first = first->next;
		last = (last->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - a function the frees listint_t
 * @h: a pointer to the node
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t len, index;

	len = loop_listint_count(*h);
	if (len == 0)
	{
		for (; h != NULL && *h != NULL; len++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < len; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (len);
}
