#include "lists.h"
/**
 * *insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * @head: the pointeer to the node
 * @idx: the position to insert the new node
 * @n: input value
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new_node, **node_ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	node_ptr = head;
	for (index = 0; index < idx && (*node_ptr)->next != NULL; index++)
	{
		node_ptr = &((*node_ptr)->next);
	}
	new_node->next = *node_ptr;
	*node_ptr = new_node;

	return (new_node);

}
