#include "lists.h"
/**
 * *reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev_node = NULL;

	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	(*head)->next = prev_node;
	return (*head);
}
