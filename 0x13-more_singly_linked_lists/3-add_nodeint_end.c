#include "lists.h"
/**
 * *add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list
 * @head: pointer to the node
 * @n: input value
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *tmp;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = end_node;
	return (end_node);
}
