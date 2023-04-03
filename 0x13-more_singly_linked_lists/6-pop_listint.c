#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n)
 * @head: pointer to the first node
 *
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (data);

}
