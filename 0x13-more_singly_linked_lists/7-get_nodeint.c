#include "lists.h"
/**
 * *get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: the pointer to the node
 * @index: is the index of the node
 *
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int element = 0;
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		if (element == index)
			return (temp);
		element++;
		temp = temp->next;
	}
		return (NULL);
}
