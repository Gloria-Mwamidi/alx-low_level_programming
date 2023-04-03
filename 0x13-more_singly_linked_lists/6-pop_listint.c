#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @n: data to be returned
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if ((*head) == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = (*head)->n;
	free(temp);
	return (data);

}
