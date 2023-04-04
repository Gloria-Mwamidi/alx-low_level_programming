#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to a node
 *
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	prev_node = tmp;
	for (i = 0; i < index; i++)
	{
		prev_node = tmp;
		tmp = tmp->next;
	}
	prev_node->next = tmp->next;
	free(tmp);
	return (1);
}

